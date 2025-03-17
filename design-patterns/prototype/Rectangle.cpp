
#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(int x, int y, std::string_view color, int width, int height)
    : ProtoShape(x, y, color), width(width), height(height) {

}

ProtoShape* Rectangle::clone() const {
    return new Rectangle(*this);
}

void Rectangle::printSomething() const {
    std::cout << "Printing from rectangle" << std::endl;
}