#include <iostream>
#include "Dog.h"

int main() {
  Dog* d = new Dog("Fluffy", "berny", 4);
  d->printInfo();

  //note difference in . vs -> (look in Dog.h)
  d->setAge(9).setBreed("noodle")->setName("Kirby");
  d->printInfo();

  delete d;
  d = nullptr;

  return 0;
}