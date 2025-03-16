
#pragma once

#include "Transport.h"

class Ship: public Transport {
public:
    ~Ship();
public:
    void deliver() override;
};