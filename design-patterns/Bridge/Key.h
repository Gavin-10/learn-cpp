
#pragma once

#include "Car.h"

class Key {
public:
    Key(Car*);
    virtual ~Key();
public:
    bool lock();
    bool unlock();
    bool panic();
    bool openTrunk();
private:
    Car* car;
};