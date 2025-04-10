
#pragma once

#include <functional>

#include "value.h"

class PropertyWrapper {
public:
  PropertyWrapper(Value*, std::function<bool(int)>);
  ~PropertyWrapper();
public:
  bool storeNew(int);
  int getStored();
private:
  Value* value;
  std::function<bool(int)> wrapperFunction;
};