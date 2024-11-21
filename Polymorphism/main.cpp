#include <iostream>

#include "Shape.h"
#include "Oval.h"
#include "Circle.h"

int main() {
  Shape shape1("Shape 1");
  shape1.draw();

  Oval oval1(2, 3.5, "Oval1");
  oval1.draw();

  Circle circle1(3.3, "Circle1");
  circle1.draw();

  Shape* shape_ptr = &shape1;
  shape_ptr->draw();

  shape_ptr = &oval1;
  shape_ptr->draw();

  shape_ptr = &circle1;
  shape_ptr->draw();

  return 0;
}