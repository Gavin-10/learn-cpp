
#include "Flywheight.h"

#include <iostream>

Flywheight::Flywheight(const SharedState* sharedState) : sharedState(new SharedState(*sharedState)) {};

Flywheight::Flywheight(const Flywheight& copy) : sharedState(new SharedState(*copy.sharedState)) {};

Flywheight::~Flywheight() {
  delete sharedState;
  sharedState = nullptr;
}

SharedState* Flywheight::getSharedState() const {
  return sharedState;
}

void Flywheight::operation(const UniqueState& uniqueState) const {
  std::cout << "Flywheight: Displaying shared: " << sharedState << " and unique  " << uniqueState << " state" << std::endl;
}