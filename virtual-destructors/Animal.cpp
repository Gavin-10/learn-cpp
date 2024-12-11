#include "Animal.h"

Animal::Animal(std::string_view description) : description(description) {};

void Animal::breathe() const {
  std::cout << "Animal: " << this->description << " is breathing" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal Destructor" << std::endl;
}