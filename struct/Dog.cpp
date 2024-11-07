#include "Dog.h"
#include <iostream>

std::string Dog::getName() {
  return this->m_name;
}

int Dog::getAge() {
  return this->m_age;
}

void Dog::setName(std::string_view name) {
  this->m_name = name;
}

void Dog::setAge(int age) {
  this->m_age = age;
}

void Dog::printInfo() {
  std::cout << "name: " << this->m_name << ", age: " << this->m_age << std::endl;
}