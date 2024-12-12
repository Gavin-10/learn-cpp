#include "Animal.h"

#include <iostream>

Animal::Animal(std::string_view description) : description(description) {};

void Animal::breathe() const {
  std::cout << "Animal " << this->description << " is breathing" << std::endl;
}