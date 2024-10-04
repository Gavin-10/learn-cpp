#include <iostream>
#include "person.h"

struct Point {
  double m_x{};
  double m_y{};
};

//double accountBallance{};
//class definitions can be repeated in multiple files
//you cant repeat variable names on top level


int main() {
  std::cout << "Success" << std::endl;

  Point po1;

  std::cout << po1.m_x << po1.m_y << std::endl;

  Person p1("John", 35);
  p1.print_into();

  return 0;
}