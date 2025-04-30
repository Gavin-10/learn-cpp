
#pragma once

#include <string>
#include <string_view>
#include <iostream>

struct UniqueState {
  UniqueState(std::string_view, std::string_view);

  friend std::ostream &operator << (std::ostream &out, const UniqueState &uniqueState) {
    return out << "[ " << uniqueState.owner << " " << uniqueState.registrationNumber << " ]";
  }

  std::string owner;
  std::string registrationNumber;
};