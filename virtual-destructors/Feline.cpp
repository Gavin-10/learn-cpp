#include "Feline.h"

Feline::Feline(std::string_view description, std::string_view furStyle)
  : furStyle(furStyle), Animal(description) {

}

void Feline::run() const {
  std::cout << "Feline " << this->description << " is running" << std::endl;
}

Feline::~Feline() {
  std::cout << "Feline Destructor" << std::endl;
}