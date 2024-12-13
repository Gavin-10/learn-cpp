#include <iostream>

#include "Circle.h"
#include "Rectangle.h"

int main() {
  Shape* r = new Rectangle();
  Shape* c = new Circle(7, "circle 1");
  Rectangle* r1 = new Rectangle(4, 5, "Rectangle 1");
  Circle* c1 = new Circle(3.65, "Circle 2");
  Rectangle* r2 = new Rectangle(7.9, 11.98, "Rectangle 2");

  Shape* shapes[] = {r, c, r1, c1, r2};

  for(auto& shape: shapes) {
    std::cout << shape->getDescription() << std::endl;
    std::cout << shape->perimeter() << std::endl;
    std::cout << shape->surface() << std::endl;
  }

  return 0;
}