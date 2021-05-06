#ifndef GAME_H
#define GAME_H
#include <cstring>
#include <ctime>
#include <map>
using namespace std;

class status
{
public:
    int trial, frozen, inAir;
    status()
    {
        trial = 0;
        frozen = 0;
        inAir = 0;
    }
};

class element
{
public:
    string name;
    int user, elementLevel;
    int energyMaximum[11], hpMaximum[11];
    int baseAttack, baseDefense, baseHP;
    void normalAttack();
    virtual void skill();
};

class player
{
public:
    string name;
    status status_bar;
    int user, hp, attack, defense, hpRestore, energy, level, exp;
    int lock;
    element *ele;
    ~player();
    void initialize(string n, int id, string e);
    void show();
    void turn();
    void upgrade();
    void receiveDamage(int from, int damage);
    void gainExp(int amount);
    void gainEnergy(int amount);
    void restoreHP(int amount);
    void mutate();
    void evolve();
};

player players[101];
int n, dn = 0;
int Round = 0;
#endif // GAME_H