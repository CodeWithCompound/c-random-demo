#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
    unsigned seed = (unsigned)time(NULL);
    srand(seed);

    const int MAX_FLUXUATION = 7;
    const int MAX_SUB_OR_ADD = 2;
    
    int last_enemy_health = 100;
    int enemy_health = 100;

    int base_player_damage = 10;
    
    
    printf("WHY THIS EXISTS: \n");
    printf("Hello, this is a little example of using random numbers, in this case we have a player and enemy.");
    printf("for simplification and the lack of skills this is not a full cli game but rather just a showcase of the player attacking, the damage will always vary thanks to the random fluxuations.\n");
    printf("=============================================\n\n");
    printf("Oh look! A Enemy! imagine a really cool atk animation here!!\n\n");

    
    int random_fluxuation = (rand() % MAX_FLUXUATION + 1);
    // we generate a number from 1 - 7
    int subtract_or_add = rand() % MAX_SUB_OR_ADD + 1;
    // we generate another number that is either 1 or 2
    int player_damage;

    if (subtract_or_add == 1) {
        player_damage = base_player_damage + random_fluxuation;
    }
    // if the number mentioned above is equal to one we will add the random number from 1 - 7
    if (subtract_or_add == 2) {
        player_damage = base_player_damage - random_fluxuation;
    }
    // if the number mentioned above is equal to one we will subtract the random number from 1 - 7

    enemy_health = enemy_health - player_damage;
    // after considering all the above we can now subtract the damage delt from the health the enemy has.


    printf("=============================================\n");

    printf("random number between one and seven: %d\n", random_fluxuation);
    
    printf("=============================================\n");
    
    printf("case (one is adding, two is subtracting): %d\n", subtract_or_add);
    
    printf("=============================================\n");
        
    printf("final player damage: %d\n", player_damage);
    
    printf("=============================================\n");
        
    printf("enemy health before atk: %d\n", last_enemy_health);
    
    printf("=============================================\n");

    printf("enemy health after atk: %d\n", enemy_health);
    
    printf("=============================================\n");



    return 0;
}