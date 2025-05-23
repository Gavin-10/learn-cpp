
#pragma once

#include <string>

class Handler {
public:
  virtual ~Handler() = default;
public:
  virtual Handler* setNext(Handler* handler) =0;
  virtual void handle(std::string_view) =0;
};