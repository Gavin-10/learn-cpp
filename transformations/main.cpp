#include "Dog.h"
#include <iostream>

int main() {
  Animal* a1 = new Feline("short hair", "a new feline");

  Feline* f1 {dynamic_cast<Feline*>(a1)};

  Dog* d1 {dynamic_cast<Dog*>(a1)};

  if(d1) {
    d1->bark();
  } else {
    std::cout << "Pointer not found" << std::endl;
  }

  f1->run();

  Feline f2 {"stripes", "feline 2"};

  Animal& a2 = f2;

  Feline& f3 {dynamic_cast<Feline&>(a2)};

  f3.felineThing();

  delete a1;
  delete f1;
  delete d1;

  return 0;
}