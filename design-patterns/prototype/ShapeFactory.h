
#pragma once

#include "ProtoShape.h"
#include "Rectangle.h"
#include "Circle.h"

#include <map>
#include <string>
#include <string_view>

class ShapeFactory {
public:
    ShapeFactory();
    ~ShapeFactory();
public:
    ProtoShape* createShape(std::string_view);
private:
    std::map<std::string, ProtoShape*> shapes;
};