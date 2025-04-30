
#pragma once

#include <unordered_map>
#include <string>

#include "SharedState.h"
#include "Flywheight.h"

class FlywheightFactory {
public:
  FlywheightFactory(std::initializer_list<SharedState>);
public:
  Flywheight getFlywheight(const SharedState&);
  void listFlywheights() const;
private:
  std::string getKey(const SharedState&) const;
private:
  std::unordered_map<std::string, Flywheight> flywheights;
};