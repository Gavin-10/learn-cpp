#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
#include <string_view>
#include <iostream>

class Animal {
  public:
    Animal() = default;
    Animal(std::string_view);
    virtual ~Animal();

    virtual void breathe() const;

  protected:
    std::string description;
};

#endif