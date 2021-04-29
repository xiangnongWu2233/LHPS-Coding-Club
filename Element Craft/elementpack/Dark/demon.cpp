#include <iostream>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include "../../game.h"
#include "../baseelement.h"
#include "../mutatedelement.h"
using namespace std;

demon::demon() : dark()
{
    name = "Demon";
    skillNum = 3;
    elementLevel = 2;
    printf("Element mutated: ");
    printf("\033[35m\033[40m");
    cout << name;
    printf("\033[0m\n");
    ultimateCost = 1;
}

void demon::ultimate()
{
    printf("%d %s - %d energy\n", id, players[id].name.c_str(), ultimateCost);
    players[id].energy -= ultimateCost;
    sleep(1);
    printf("Sigil + 1\n");
    sigil++;
    if (sigil == 6)
    {
        printf("Sixfold Curse!\n");
        sleep(2);
        for (int i = 1; i <= n; i++)
            if (players[i].hp > 0 && i != id)
            {
                if (players[i].hp > players[id].hp)
                {
                    printf("Curse!\n");
                    players[i].receiveDamage(id, players[id].attack * 2);
                }
                else
                {
                    printf("Pain!\n");
                    players[i].receiveDamage(id, players[id].attack);
                }
            }
        sigil = 0;
    }
    sleep(1);
}