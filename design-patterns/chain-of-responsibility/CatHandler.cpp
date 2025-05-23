
#include "CatHandler.h"

#include <iostream>

void CatHandler::handle(std::string_view request) {
  if (request.compare("Tuna") == 0) {
    std::cout << "Cat is eating" << std::endl;
  } else {
    std::cout << "Cat not eating" << std::endl;
    AbstractHandler::handle(request);
  }
}