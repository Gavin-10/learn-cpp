#include "Dog.h"

int main() {
  Dog *d = new Dog();

  //In this case, only base destructor is called without virtual destructors
  Animal *a1 = d;
  delete a1;

  return 0;
}