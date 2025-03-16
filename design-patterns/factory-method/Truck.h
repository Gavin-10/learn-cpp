
#pragma once

#include "Transport.h"

class Truck: public Transport {
public:
    ~Truck();
public:
    void deliver() override;
};