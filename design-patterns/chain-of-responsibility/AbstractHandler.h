
#pragma once

#include "Handler.h"

class AbstractHandler: public Handler {
public:
  AbstractHandler() = default;
  ~AbstractHandler();
public:
  Handler* setNext(Handler*) override;
  void handle(std::string_view) override;
protected:
  Handler* nextHandler = nullptr;
};