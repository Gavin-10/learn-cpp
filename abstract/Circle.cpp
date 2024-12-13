#include "Circle.h"

Circle::Circle(std::string_view description) : Shape(description) {};

Circle::Circle(double radius, std::string_view description)
  : radius(radius), Shape(description) {

}

double Circle::surface() const {
  return Circle::PI * this->radius * this->radius;
}

double Circle::perimeter() const {
  return 2 * Circle::PI * this->radius;
}