
#pragma once

#include "Car.h"

class Subaru: public Car {
public:
    Subaru(std::string_view, int);
    ~Subaru() = default;
public:
    void detail() override;
};