
#pragma once

#include <string>
#include <string_view>

class ProtoShape {
public:
    ProtoShape();
    ProtoShape(int, int, std::string_view);
    virtual ~ProtoShape() = default;
public:
    virtual ProtoShape* clone() const =0;
    virtual void printSomething() const =0;
protected:
    int x;
    int y;
    std::string color;
};