#include <iostream>
#include "Dog.h"
#include "Cat.h"

int main() {
  Dog* d = new Dog();
  d->setName("Fluffy");
  d->setAge(4);
  d->printInfo();

  Cat c;
  c.m_name = "Spud";
  c.m_age = 2;
  
  std::cout << c.m_name << " " << c.m_age << std::endl;

  return 0;
}