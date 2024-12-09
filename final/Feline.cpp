#include "Feline.h"

Feline::Feline(std::string_view furStyle, std::string_view description)
    : furStyle(furStyle), Animal(description) {

}

void Feline::run() const {
    std::cout << "Feline " << this->description << " is running" << std::endl;
}