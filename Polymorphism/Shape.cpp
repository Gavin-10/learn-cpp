#include "Shape.h"

#include <iostream>

Shape::Shape(std::string_view description) : description(description) {};

Shape::~Shape() {
  
}

void Shape::draw() const {
  std::cout << "Now drawing: " << this->description << std::endl;
}