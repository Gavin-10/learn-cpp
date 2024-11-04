#include <iostream>
#include "Cylinder.cpp"
#include "Circle.cpp"

int main() {
  Cylinder c1;
  std::cout << c1.getHeight() << " " << c1.getRadius() << std::endl;
  std::cout << c1.volume() << std::endl;

  Cylinder c2(10, 4);
  std::cout << c2.getHeight() << " " << c2.getRadius() << std::endl;
  std::cout << c2.volume() << std::endl;

  Circle circle;
  std::cout << circle.getRadius() << std::endl;
  std::cout << circle.area() << std::endl;

  Circle circle2(2.5);
  std::cout << circle2.getRadius() << std::endl;
  std::cout << circle2.area() << std::endl;

  return 0;
}