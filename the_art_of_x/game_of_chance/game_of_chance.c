#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "../lib/hacking.h"
#include "game_of_chance.h"

#define DATAFILE "/var/chance.data" // File to store user data
#define DEBUG_LOG "debug_log"

struct user player;     // Player struct

// BEGIN DEBUG
void dump_user_byte(int fd, struct user *p, int size)
{
    dprintf(fd, "Bytes of struct @ %p\n", p);

    unsigned char *raw_ptr = (unsigned char *)p;
    for(int i = 0; i < size; i++) {
        dprintf(fd, "%02x ", raw_ptr[i]);
        if(i%16 == 15)
            write(fd, "\n", 1);
        }
        write(fd, "\n", 1);
}
// END DEBUG

int get_player_data()
{
    int fd, debug, uid, read_bytes;
    struct user entry;

    uid = getuid();

    // Opening Debug Log
    debug = open(DEBUG_LOG, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IRGRP|S_IROTH);
    if(debug == -1) {
        fatal("in get_player_data(), failed to open debug log for writing");
        return -101;
    }

    write(debug, "====|int get_player_data()|====", 30);
    write(debug, "\n", 1);
    dprintf(debug, "[DEBUG] USERID: %d\n", uid);

    // Opening Data File
    fd = open(DATAFILE, O_RDONLY);
    if(fd == -1)
        return -1;

    dprintf(debug, "Opened: %s\n", DATAFILE);

    read_bytes = read(fd, &entry, sizeof(struct user));
    while(entry.uid != uid && read_bytes > 0) {
        read_bytes = read(fd, &entry, sizeof(struct user));
    }

    dprintf(debug, "Closed: %s\n", DATAFILE);
    close(fd);

    dprintf(debug, "Bytes read: %d\n", read_bytes);

    if(read_bytes < sizeof(struct user))
        return -1;
    else {
        player = entry; // Copy the read entry into the player struct.
        dump_user_byte(debug, &player, sizeof(struct user));
        close(debug);
    }
    return 1;   // Return success.
}

// User registration function.
// Creates a new player and appends it to the file.
void register_new_player()
{
    int fd;

    printf("-=-={ New Player Registration  }=-=-\n");
    printf("Enter your name: ");
    input_name();

    player.uid = getuid();
    player.highscore = player.credits = 100;

    fd = open(DATAFILE, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
    if(fd == -1)
        fatal("in register_new_player() while opening file");
    write(fd, &player, sizeof(struct user));
    close(fd);

    printf("\nWelcome to the Game of Chance %s.\n", player.name);
    printf("You have been give %u credits.\n", player.credits);
}

// This function writes the current player data to the file 
// Primarily used for updating the credits after games
void update_player_data()
{
    int fd, i, read_uid;
    char burned_byte;

    fd = open(DATAFILE, O_RDWR);
    if(fd == -1) // If open fails here, something is really wrong.
        fatal("in update_player_data() while opening file");

    read(fd, &read_uid, 4);  // Read the uid from the first struct
    while(read_uid != player.uid) { // Loop until correct uid is found.
        for(i = 0; i < sizeof(struct user) - 4; i++) // Read through the
            read(fd, &burned_byte, 1);  // rest of that struct.
        read(fd, &read_uid, 4); // Read the uid from the next struct.
    }

    write(fd, &(player.credits), 4);    // Update credits
    write(fd, &(player.highscore), 4);  // Update highscore
    write(fd, &(player.name), sizeof(player.name)); // Update name.
    close(fd);
}

// This function will display the current high score and
// the name of the person who set that high score.
void show_highscore()
{
    unsigned int top_score = 0;
    char top_name[100];
    struct user entry;
    int fd;

    printf("\n====================| HIGH SCORE |====================\n");

    fd = open(DATAFILE, O_RDONLY);
    if(fd == -1)
        fatal("in show_highscore() while opening file");
    while(read(fd, &entry, sizeof(struct user)) > 0) { // Loop until end of file.
        if(entry.highscore > top_score) { // If there is a higher score,
            top_score = entry.highscore;  // set top_score to that score
            strcpy(top_name, entry.name); // and top_name to that username.
        }
    }
    close(fd);

    if(top_score > player.highscore)
        printf("%s has the high score %u\n", top_name, top_score);
    else
        printf("You currently have the high score of %u credits!\n", player.highscore);
    printf("========================================================\n\n");
}

// This function simply awards the jackpot for the Pick a Number game.
void jackpot()
{
    printf("*+*+*+*+*+* JACKPOT *+*+*+*+*+*\n");
    printf("You have won the jackpot of 100 credits!\n");
    player.credits += 100;
}

// This function is used to input the player name, since
// scanf("%s", &whatever) will stop input at the first space.
void input_name()
{
    char *name_ptr, input_char = '\n';
    while(input_char == '\n')       // Flush any left over
        scanf("%c", &input_char);   // newline chars.

    name_ptr = (char *) &player.name;   // name_ptr = player name's address.
    while(input_char != '\n') {
        *name_ptr = input_char;         // Put the input char into name field 
        scanf("%c", &input_char);       // Get the next char.
        name_ptr++;                     // Increment the name pointer
    }
    *name_ptr = 0;                      // Terminate the string
}

// This function prints the 3 cards for the Find the Ace game.
// It expects a message to display, a pointer to the cards array,
// and the card the user has picked as input. If the user_pick is
// -1, then the selection numbers are displayed.
void print_cards(char *message, char *cards, int user_pick)
{
    int i;

    printf("\n\t*** %s ***\n", message);
    printf("       \t._.\t._.\t._.\n");
    printf("Cards:\t|%c|\t|%c|\t|%c|\n\t", cards[0], cards[1], cards[2]);
    if(user_pick == -1)
        printf(" 1 \t 2 \t 3\n");
    else {
        for(i = 0; i < user_pick; i++)
            printf("\t");
        printf(" ^-- your pick\n");
    }
}

// This function inputs wagers for both the No Match Dealer and
// Find the Ace games. It expects the available credits and the
// previous wager as arguments. The previous_wager is only important
// for the second wager is too big or too little, and it returns
// the wager amount otherwise.
int take_wager(int available_credits, int previous_wager)
{
    int wager, total_wager;

    printf("How many of your %d would you like to wager? ", available_credits);
    scanf("%d", &wager);
    if(wager < 1) {
        printf("Nice try, but you must wager a positive number!\n");
        return -1;
    }

    total_wager = previous_wager + wager;
    if(total_wager > available_credits) {
        printf("Your total wager of %d is more than you have!\n", total_wager);
        printf("You only have %d available credits, try again.\n", available_credits);
        return -1;
    }
    return wager;
}

// This function contains a loop to allow the current game to be
// played again. It also writes the new credit totals to file
// after each game is played.
void play_the_game()
{
    int play_again = 1, debug;
    // int (*game) () = player.current_game;
    char selection;

    debug = open(DEBUG_LOG, O_WRONLY|O_APPEND);
    if(debug == -1)
        fatal("in playe_the_game() function, failed open file for writing");

    while(play_again) {
        dprintf(debug, "[DEBUG] Current Game Pointer %p\n", player.current_game);
        if(player.current_game() != -1) {
            if(player.credits > player.highscore)
                player.highscore = player.credits;
            printf("\nYou now have %u credits\n", player.credits);
            update_player_data();

            printf("Would you like to play again? (y/n) ");
            selection = '\n';
            while(selection == '\n')
                scanf("%c", &selection);
            if(selection == 'n')
                play_again = 0;
        }
        else                // Game returned an error
          play_again = 0;   // return to main menu.
    }
    dprintf(debug, "================================================\n");
    close(debug);
}

int pick_a_number()
{
    int pick, winning_number;

    printf("\n####### Pick a Number #######\n");
    printf("This game costs 10 credits to play. simply pick a number\n");
    printf("between 1 and 20, and if you pick the winning number, you\n");
    printf("will win the jackpot of 100 credits!\n\n");

    winning_number = (rand() % 20) + 1; // Pick a number between 1 and 20
    if(player.credits < 10) {
        printf("You only have %d credits. That's not enough to play!\n\n", player.credits);
        return -1; // Not enough credits to play
    }

    player.credits -= 10;   // Deduct 10 credits.
    printf("10 credits have been deducted from your account.\n");
    printf("Pick a number between 1 and 20: ");
    scanf("%d", &pick);

    printf("The winning number is %d\n", winning_number);
    if(pick == winning_number)
        jackpot();
    else
        printf("Sorry, you didn't win.\n");
    return 0;
}

int dealer_no_match()
{
     
    int i, j, numbers[16], wager = -1, match = -1;

    printf("\n::::::: No Match Dealer :::::::\n");
    printf("In this game, you can wager up to all of your credits.\n");
    printf("The dealer will deal out 16 random numbers between 0 and 99.\n");
    printf("If there are no matches among them, you double your money!\n\n");

    if(player.credits == 0) {
        printf("You don't have any credits to wager!\n\n");
        return -1;
    }

    while(wager == -1)
        wager = take_wager(player.credits, 0);

    printf("\t::: Dealing out 16 random numbers :::\n");
    for(i = 0; i < 16; i++) {
        numbers[i] = rand() % 100;  // Pick a number between 0 and 99.
        printf("%2d\t", numbers[i]);
        if(i%8 == 7)                // Print line break every 8 numbers
            printf("\n");
    }

    for(i = 0; i < 15; i++) {
        j = i + 1;
        while(j < 16) {
            if(numbers[i] == numbers[j])
                match = numbers[i];
            j++;
        }
    }

    if(match != -1) {
        printf("The dealer match the number %d!\n", match);
        printf("You lose %d credits.\n", wager);
        player.credits -= wager;
    }
    else {
        printf("There were no matches! You win %d credits!\n ", wager);
        player.credits += wager;
    }
    return 0;
}

// This is the Find Ace game.
// It returns -1 if the player has 0 credits.
int find_the_ace()
{
    int i, ace; // total_wager;
    int invalid_choice, pick = -1, wager_one = -1, wager_two = -1;
    char choice_two, cards[3] = {'X', 'X', 'X'};

    ace = rand() % 3; // Place the ace randomly.

    printf("\n******* Find the Ace *******\n");
    printf("In this game, you can wager up to all of your credits.\n");
    printf("Three cards will be dealt out, two queens and one ace.\n");
    printf("If you find the ace, you will win your wager.\n");
    printf("After choosing a card, one of the queens will be revealed.\n");
    printf("At this point, you may either select a different card or\n");
    printf("increase your wager.\n\n");

    if(player.credits == 0) {
        printf("You don't have any credits to wager!\n\n");
        return -1;
    }

    while(wager_one == -1)  // Loop until a valid wager is made.
        wager_one = take_wager(player.credits, 0);

    while((pick < 1) || (pick > 3)) { // Loop until valid pick is made
        printf("Select a card [1|2|3]: ");
        scanf("%d", &pick);
    }
    pick--;     // Adjust the pick since card numbering starts at 0.

    i = 0;
    while(i == ace || i == pick) // Keep looping until
        i++;                     // we find a valid queen to reveal.
    cards[i] = 'Q';
    print_cards("Revealing a queen", cards, pick);

    invalid_choice = 1;
    while(invalid_choice) {
        printf("Would You like to:\n[c]hange your pick\tor\t[i]ncrease your wager?\n");
        printf("Select c or i: ");
        choice_two = '\n';

        while(choice_two == '\n') // Flush extra newlines
            scanf("%c", &choice_two);
        if(choice_two == 'i') { // Increase wager
            invalid_choice = 0;
            while(wager_two == -1)
                wager_two = take_wager(player.credits, wager_one);
        }

        if(choice_two == 'c') {
            i = invalid_choice = 0; // Valid choice
            while(i == pick || cards[i] == 'Q')
                i++;
            pick = i;
            printf("Your card pick has been changed to card %d\n", pick+1);
        }
    }

    for(i = 0; i < 3; i++) { // Reveal cards.
        if(ace == i)
            cards[i] = 'A';
        else
            cards[i] = 'Q';
    }
    print_cards("End result", cards, pick);

    if(pick == ace) { // Handle win
        printf("You have won %d credits from your first wager\n", wager_one);
        player.credits += wager_one;
    }
    else {
        printf("You have lost %d credits from your first wager\n", wager_one);
        player.credits -= wager_one;

        if(wager_two != -1) {
            printf("and an additional %d credits from your second wager!\n", wager_two);
            player.credits -= wager_two;
        }
    }
    return 0;
}
