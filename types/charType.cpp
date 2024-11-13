#include <iostream>

int main() {
  char myChar {65};
  char myOtherChar {'G'};

  std::cout << "value: " << myChar << std::endl;
  std::cout << "numeric value: " << static_cast<int>(myChar) << std::endl;

  std::cout << "value: " << myOtherChar << std::endl;
  std::cout << "Numeric Value: " << static_cast<int>(myOtherChar) << std::endl;

  return 0;
}