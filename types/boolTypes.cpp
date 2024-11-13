#include <iostream>

int main() {
  bool variable1 {true};
  bool variable2 {false};

  std::cout << "Your variables are: " << variable1 << variable2 << std::endl;

  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "Your variables are now: " << variable1 << variable2 << std::endl;

  //booleans in c++ still take a full byte

  return 0;
}