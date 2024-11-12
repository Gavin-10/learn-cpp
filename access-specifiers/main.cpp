#include <iostream>
#include "Person.h"
#include "Player.h"


int main() {
  Person p("John", "Snow");
  std::cout << p << std::endl;
  std::cout << p.getFirstName() << std::endl;

  Player p1("Wade", "Watts", "Oasis");
  std::cout << p1 << std::endl;
  //not possible becuase of more restrictive access specifiers
  //std::cout << p1.getFirstName() << std::endl;

  return 0;
}