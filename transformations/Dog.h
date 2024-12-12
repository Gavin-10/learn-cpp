#ifndef DOG_H_
#define DOG_H_

#include "Feline.h"

class Dog : Feline {
  using Feline::Feline;
  public:
    virtual ~Dog() = default;

    void bark() const;
};

#endif