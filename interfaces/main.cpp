#include <iostream>

#include "Point.h"

int main() {
  //sorta doesnt exist explicitly in c++ but its an abstract class with only pure
  //virtual functions
  Point p(2.4, 5.6);

  std::cout << p << std::endl;

  return 0;
}