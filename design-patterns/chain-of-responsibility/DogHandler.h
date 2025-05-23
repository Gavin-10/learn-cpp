
#pragma once

#include "AbstractHandler.h"

class DogHandler: public AbstractHandler {
public:
  void handle(std::string_view) override;
};