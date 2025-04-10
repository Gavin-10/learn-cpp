
#include <iostream>

#include "value.h"
#include "propertyWrapper.h"

int main() {
  Value* v = new Value(10);

  PropertyWrapper greaterThanTen(v, [](int newValue) -> bool {return newValue >= 10;});

  greaterThanTen.storeNew(9);
  greaterThanTen.storeNew(11);

  return 0;
}