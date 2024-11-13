#include <iostream>

#include "person.h"
#include "Engineer.h"


int main() {
  Person p("Gavin", 19, "some address");
  std::cout << p << std::endl;

  Engineer e("Joe", 45, "some address", 254);
  std::cout << e << std::endl;

  return 0;
}