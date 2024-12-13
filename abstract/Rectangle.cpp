#include "Rectangle.h"

Rectangle::Rectangle(std::string_view description) : Shape(description) {};

Rectangle::Rectangle(double width, double height, std::string_view description)
  : width(width), height(height), Shape(description) {

}

double Rectangle::surface() const {
  return this->width * this->height;
}

double Rectangle::perimeter() const {
  return this->width * 2 + this->height * 2;
}



