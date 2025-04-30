
#include "UniqueState.h"

UniqueState::UniqueState(std::string_view owner, std::string_view registrationNumber)
  : owner(owner), registrationNumber(registrationNumber) {
    
  }