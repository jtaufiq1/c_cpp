//#include "game_of_chance.c"

// Custom user struct to store information about users
struct user {
    int uid;
    int credits;
    int highscore;
    char name[100];
    int (*current_game)();
};

// Function prototypes
int get_player_data();
void register_new_player();
void update_player_data();
void show_highscore();
void jackpot();
void input_name();
void print_cards(char *, char *, int);
int take_wager(int, int);
void play_the_game();
int pick_a_number();
int dealer_no_match();
int find_the_ace();

// DEBUG
void dump_user_byte(int fd, struct user *, int);
