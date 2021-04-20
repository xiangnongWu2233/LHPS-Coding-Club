#include <cstdio>
#include <cstring>
#include "../../game.h"
#include "../element.h"
using namespace std;

ghost::ghost() : element(4)
{
    name = "Ghost";
    skillNum = 3;
    elementLevel = 2;
    printf("Element mutated: ");
    printf("\033[30m\033[44m");
    cout << name;
    printf("\033[0m\n");
}