
#include "DogHandler.h"

#include <iostream>

void DogHandler::handle(std::string_view request) {
  if (request.compare("Beef") == 0) {
    std::cout << "Dog is eating" << std::endl;
  } else {
    std::cout << "Dog not eating" << std::endl;
    AbstractHandler::handle(request);
  }
}