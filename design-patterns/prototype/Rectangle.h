
#pragma once

#include "ProtoShape.h"

class Rectangle: public ProtoShape {
public:
    Rectangle(int, int, std::string_view, int, int);
    ~Rectangle() = default;
public:
    ProtoShape* clone() const override;
    void printSomething() const override;
private:
    int width;
    int height;
};