#include <iostream>
#include "Dog.h"

void some_func() {
  Dog kirby("Kirby", "Noodle", 9);
  kirby.print();
}

//NOTE: DO NOT PASS BY VALUE WHERE THERE IS A DESTRUCTOR
//also delete heap objects to call destructor

int main() {
  Dog my_dog("Fluffy", "Shepherd", 2);
  my_dog.print();

  some_func();

  return 0;
}