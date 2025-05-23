
#pragma once

#include "AbstractHandler.h"

class CatHandler: public AbstractHandler {
public:
  void handle(std::string_view) override;
};