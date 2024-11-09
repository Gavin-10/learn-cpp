#include <iostream>
#include "Player.h"

int main() {
  Player p1("Basketball", "John", "Snow");
  std::cout << p1.getFirstName() << std::endl;

  return 0;
}