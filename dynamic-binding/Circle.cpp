#include "Circle.h"

#include <iostream>

Circle::Circle(double rad, std::string_view description)
  : Oval(rad, rad, description) {};

Circle::~Circle() {

}

void Circle::draw() const {
  std::cout << "Drawing Circle: " << this->description << ", rad: " << this->getXRad() << std::endl;
}