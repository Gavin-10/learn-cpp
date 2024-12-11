#include "Dog.h"

void Dog::bark() const {
  std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog Destructor" << std::endl;
}