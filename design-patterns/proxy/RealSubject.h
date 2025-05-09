
#pragma once

#include "Subject.h"

class RealSubject: public Subject {
public:
  void request() const override;
};