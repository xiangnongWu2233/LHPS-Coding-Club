#include <iostream>
#include <cstdio>
#include "../../game.h"
#include "lightElement.h"

using namespace std;

light::light()
{
    name = "Light";
    baseAttack = 3;
    baseDefense = 4;
    baseHP = 30;
    hpMaximum[1] = baseHP;
    for (int i = 2; i <= 5; i++)
        hpMaximum[i] = hpMaximum[i - 1] + i + 2;
    for (int i = 6; i <= 10; i++)
        hpMaximum[i] = hpMaximum[i - 1] + 4;
}
