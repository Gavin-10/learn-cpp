
#pragma once

#include "SharedState.h"
#include "UniqueState.h"

class Flywheight {
public: 
  Flywheight(const SharedState*);
  Flywheight(const Flywheight&);
  ~Flywheight();
public:
  SharedState* getSharedState() const;
  void operation(const UniqueState&) const;
private:
  SharedState* sharedState;
};