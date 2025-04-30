
#pragma once

#include <string>
#include <string_view>
#include <iostream>

struct SharedState {
  SharedState(std::string_view, std::string_view, std::string_view);

  friend std::ostream &operator << (std::ostream &out, const SharedState &sharedState) {
    return out << "[ " << sharedState.make << " " << sharedState.model << ", " << sharedState.year << " ]";
  }

  std::string make;
  std::string model;
  std::string year;
};