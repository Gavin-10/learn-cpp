#include <iostream>
#include "Cylinder.cpp"

int main() {
  Cylinder c1;
  c1.setRadius(3);
  c1.setHeight(7);

  std::cout << c1.volume() << std::endl;
  std::cout << c1.getRadius() << std::endl;
  std::cout << c1.getHeight() << std::endl;

  return 0;
}