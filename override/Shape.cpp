#include "Shape.h"

#include <iostream>

Shape::Shape(std::string_view description) : description(description) {};

void Shape::draw() const {
  std::cout << "Shape description: " << this->description << std::endl;
}