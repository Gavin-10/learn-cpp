#ifndef FELINE_H_
#define FELINE_H_

#include "Animal.h"

class Feline : public Animal {
  using Animal::Animal;
  public:
    Feline(std::string_view, std::string_view);
    virtual ~Feline();

    virtual void run() const;

  protected:
    std::string furStyle;

};

#endif