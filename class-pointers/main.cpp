#include <iostream>
#include "cylinder.h"

int main() {
  Cylinder c1;
  std::cout << c1.getHeight() << " " << c1.getRadius() << std::endl;
  std::cout << c1.volume() << std::endl;

  Cylinder c2(10, 4);
  std::cout << c2.getHeight() << " " << c2.getRadius() << std::endl;
  std::cout << c2.volume() << std::endl;

  //classes with pointers
  //-> is for prettier dereferencing
  Cylinder* p_c2 = &c2;
  std::cout << p_c2->volume() << std::endl;

  delete p_c2;
  p_c2 = nullptr;

  Cylinder* c3 = new Cylinder(100, 100);
  std::cout << c3->getHeight() << " " << c3->getRadius() << std::endl;
  std::cout << c3->volume() << std::endl;

  delete c3;
  c3 = nullptr;

  return 0;
}