
#include "FlywheightFactory.h"

FlywheightFactory::FlywheightFactory(std::initializer_list<SharedState> sharedStates) {
  for (const SharedState& state: sharedStates) {
    flywheights.insert(std::make_pair<std::string, Flywheight>(getKey(state), Flywheight(&state)));
  }
}

Flywheight FlywheightFactory::getFlywheight(const SharedState& sharedState) {
  std::string key = getKey(sharedState);
  if (flywheights.find(key) == flywheights.end()) {
    std::cout << "Cannot find compatable flywheight, creating new one" << std::endl;
    flywheights.insert(std::make_pair(key, Flywheight(&sharedState)));
  } else {
    std::cout << "Compatable flywheight found" << std::endl;
  }

  return flywheights.at(key);
}

void FlywheightFactory::listFlywheights() const {
  size_t count = flywheights.size();

  std::cout << count << " flywheights" << std::endl;

  for (std::pair<std::string, Flywheight> pair: flywheights) {
    std::cout << pair.first << std::endl;
  }
}

std::string FlywheightFactory::getKey(const SharedState& sharedState) const {
  return sharedState.make + "_" + sharedState.model + "_" + sharedState.year;
}