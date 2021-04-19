#include <iostream>
#include <cstdio>
#include <unistd.h>
#include "game.h"
using namespace std;

element::element(int e)
{
    skillNum = 1;
    elementLevel = 1;
    if (e == 1)
        name = "Water";
    if (e == 2)
        name = "Fire";
    if (e == 3)
        name = "Grass";
    if (e == 4)
        name = "Light";
    if (e == 5)
        name = "Dark";
}

void element::normalAttack(int attacker)
{
    printf("Choose your target: \n");
    for (int i = 1; i <= n; i++)
        if (i != attacker && players[i].hp > 0)
            printf("%d %s\n", i, players[i].name.c_str());
    cout << endl;
    int t;
    cin >> t;
    while (players[t].hp <= 0)
    {
        printf("Please enter a valid number!\n");
        sleep(2);
    }
    int damage = players[attacker].attack - players[t].defense;
    if (damage <= 0)
        damage = 1;
    int before = players[t].hp;
    players[t].receiveDamage(attacker, damage);
    if (players[t].hp != before)
        players[attacker].gainEnergy(1);
    sleep(0.5);
}