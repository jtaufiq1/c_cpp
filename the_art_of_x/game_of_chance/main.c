#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../lib/hacking.h"
#include "game_of_chance.h"

struct user player;     // Player struct

int main(void)
{
    int choice, last_game;
    
    srand(time(0)); // Seed the randomizer with current time.

    if(get_player_data() == -1) // Try to read player data from file.
        register_new_player();  // If there is no data, register a new player

    while(choice != 7) {
        printf("-==[ Game of Chance Menu ]==-\n");
        printf("1 - Play the Pick a Number game\n");
        printf("2 - Play the No Match Dealer game\n");
        printf("3 - Play the Find the Ace game\n");
        printf("4 - View current high score\n");
        printf("5 - Change your user name\n");
        printf("6 - Reset your account at 100 credits\n");
        printf("7 - Quit\n\n");

        printf("[NAME: %s]\t[CREDITS: %u]\n", player.name, player.credits);
        printf("[Select --> ");
        scanf("%d", &choice);

        // TODO: Take string input and convert to Number

        if((choice < 1) || (choice > 7)) {
            printf("\n\n[!!] The number %d is an invalid selection.\n\n", choice);
        }
        else if ((choice > 0) && (choice < 4)) {
            if(choice != last_game) { // Games
                if(choice == 1)
                    player.current_game = pick_a_number;
                else if(choice == 2)
                    player.current_game = dealer_no_match;
                else
                    player.current_game = find_the_ace;
                last_game = choice;
            }
            play_the_game();
        }
        else if(choice == 4)    // Highscore
            show_highscore();
        else if(choice == 5) {  // Change username
            printf("\nChange user name\n");
            input_name();
            printf("Your name has been changed.\n\n");
        }
        else if(choice == 6) {  // Reset credit
            printf("\nYour account has been reset with 100 credits.\n\n");
            player.credits = 100;
        }
    }

    update_player_data();
    printf("\nThanks for playing! Bye.\n");

    exit(0);
}
