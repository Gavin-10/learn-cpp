#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
#include <string_view>

class Animal {
  public:
    Animal() = default;
    Animal(std::string_view);
    virtual ~Animal() = default;

    virtual void breathe() const;

  protected:
    std::string description;
};

#endif