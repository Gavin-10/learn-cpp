#include <iostream>

#include "Person.h"
#include "Player.h"

int main() {
  Person p("John", "Snow");
  std::cout << p << std::endl;

  Player p1("Oasis", "Wade", "Watts");
  std::cout << p1 << std::endl;

  return 0;
}