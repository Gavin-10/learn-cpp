#include "Oval.h"

#include <iostream>

Oval::Oval(double x_rad, double y_rad, std::string_view description)
  : Shape(description), x_rad(x_rad), y_rad(y_rad) {};

Oval::~Oval() {
  
}

void Oval::draw() const {
  std::cout << "Drawing Oval: " << this->description << ", with x and y rad: " << this->x_rad
    << ", " << this->y_rad << std::endl;
}