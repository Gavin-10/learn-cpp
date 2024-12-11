#ifndef DOG_H_
#define DOG_H_

#include "Feline.h"

class Dog : public Feline {
  using Feline::Feline;
  public:
    virtual ~Dog();

    virtual void bark() const;
};

#endif