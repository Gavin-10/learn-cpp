
#include "propertyWrapper.h"

#include <iostream>

PropertyWrapper::PropertyWrapper(Value* value, std::function<bool(int)> wrapperFunction)
  : value(value), wrapperFunction(wrapperFunction) {

}

PropertyWrapper::~PropertyWrapper() {
  delete this->value;
  this->value = nullptr;
}

bool PropertyWrapper::storeNew(int newNum) {
  if(wrapperFunction(newNum)) {
    value->storedValue = newNum;
    std::cout << "New store success" << std::endl;
    return true;
  }

  std::cout << "New store fail" << std::endl;
  return false;
}

int PropertyWrapper::getStored() {
  return value->storedValue;
}