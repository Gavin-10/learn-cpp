
#pragma once

#include "builder.h"

class Director {
public:
    void set_builder(Builder*);
    void BuildEntryHosue();
    void BuildFullHouse();
private:
    Builder* builder;
};