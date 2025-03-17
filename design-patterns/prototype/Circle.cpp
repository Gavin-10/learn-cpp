
#include "Circle.h"

#include <iostream>

Circle::Circle(int x, int y, std::string_view color, int radius)
    : ProtoShape(x, y, color), radius(radius) {

}

ProtoShape* Circle::clone() const {
    return new Circle(*this);
}

void Circle::printSomething() const {
    std::cout << "Printing from circle" << std::endl;
}