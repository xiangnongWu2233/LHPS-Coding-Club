#include <iostream>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include "../../game.h"
#include "../baseelement.h"
#include "../mutatedelement.h"
using namespace std;

ice::ice() : water()
{
    name = "Ice";
    skillNum = 3;
    elementLevel = 2;
    printf("Element mutated: ");
    printf("\033[34m\033[46m");
    cout << name;
    printf("\033[0m\n");
    ultimateCost = 6;
}

void ice::ultimate()
{
    printf("%d %s - %d energies! \n", id, players[id].name.c_str(), ultimateCost);
    players[id].energy -= ultimateCost;
    sleep(1);
    printf("Glacier!!!\n");
    sleep(2);
    for (int i = 1; i <= n; i++)
        if (players[i].hp > 0 && i != id)
        {
            printf("Freeze %d %s !\n", i, players[i].name.c_str());
            players[i].lock += int(players[id].level / 2);
            players[i].receiveDamage(id, players[id].level);
        }
    sleep(1);
}