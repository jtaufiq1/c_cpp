#include <stdio.h>
#include "game_of_chance.h"

int main()
{
    int rvalue = 0;
    rvalue = get_player_data();

    if(rvalue == -101)
        printf("[TEST FAILED] int get_player_data()\n");

    return 0;
}
