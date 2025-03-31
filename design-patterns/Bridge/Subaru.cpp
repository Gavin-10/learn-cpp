
#include "Subaru.h"

#include <iostream>

Subaru::Subaru(std::string_view model, int year)
    : Car("Subaru", model, year) {

}

void Subaru::detail() {
    std::cout << make << " " << model << " " << year << std::endl;
    std::cout << "'boxer noises'" << std::endl;
}