#ifndef ELEMENT_H
#define ELEMENT_H

#include "../game.h"
#include "baseelement.h"
#include <cstring>
#include <cstdio>

class ice : public water
{
public:
    int ultimateCost;
    ice();
    virtual void ultimate();
    virtual void skill();
    void freeze();
    void frostStrike();
};

class wind : public water
{
public:
    int ultimateCost;
    wind();
    virtual void ultimate();
    virtual void skill();
    void cyclone();
    void Hurricane();
};

class thunder : public fire
{
public:
    thunder();
    virtual void skill();
};

class bomb : public fire
{
public:
    bomb();
    virtual void skill();
};

class earth : public grass
{
public:
    earth();
    virtual void skill();
};

class poison : public grass
{
public:
    poison();
    virtual void skill();
};

class divine : public light
{
public:
    divine();
    virtual void skill();
};

class spirit : public light
{
public:
    int ultimateCost;
    spirit();
    virtual void ultimate();
    virtual void skill();
};

class demon : public dark
{
public:
    int ultimateCost;
    int sigil;
    demon();
    virtual void ultimate();
    virtual void skill();
};

class ghost : public dark
{
public:
    int ultimateCost;
    ghost();
    virtual void ultimate();
    virtual void skill();
};

#endif