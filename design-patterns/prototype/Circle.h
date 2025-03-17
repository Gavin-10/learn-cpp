
#pragma once

#include "ProtoShape.h"

class Circle: public ProtoShape {
public:
    Circle(int, int, std::string_view, int);
    ~Circle() = default;
public:
    ProtoShape* clone() const override;
    void printSomething() const override;
private:
    int radius;
};