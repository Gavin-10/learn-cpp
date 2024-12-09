#include "Animal.h"

Animal::Animal(std::string_view description) : description(description) {};

void Animal::breath() const {
    std::cout << this->description << " is breathing" << std::endl;
}