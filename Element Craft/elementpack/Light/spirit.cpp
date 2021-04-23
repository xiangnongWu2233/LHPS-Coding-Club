#include <iostream>
#include <cstdio>
#include <cstring>
#include "../../game.h"
#include "../element.h"
using namespace std;

spirit::spirit(int i) : element(i, "4")
{
    name = "Spirit";
    skillNum = 3;
    elementLevel = 2;
    printf("Element mutated: ");
    printf("\033[91m\033[48m");
    cout << name;
    printf("\033[0m\n");
    ultracost = 4;
}

void spirit::ultimate()
{
    printf("圣灵净化！");
}