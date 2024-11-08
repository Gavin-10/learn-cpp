#include <iostream>
#include <string>
#include "Dog.h"

int main() {
  Dog dog1;

  std::cout << "size of dog: " << sizeof(Dog) << std::endl;
  std::cout << "size of string: " << sizeof(std::string) << std::endl;

  return 0;
}