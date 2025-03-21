#include "Shape.h"
#include "Oval.h"
#include "Circle.h"

int main() {
  Shape s1("Shape 1");
  Oval o1(2, 3.5, "Oval 1");
  Circle c1(3.3, "Circle1");

  Shape* shapes [3] {&s1, &o1, &c1};

  for (auto shape : shapes) {
    shape->draw();

  }

  //Note slicing
  Shape s = o1;
  s.draw();

  Shape* s2 = &o1;
  s2->draw();

  return 0;
}