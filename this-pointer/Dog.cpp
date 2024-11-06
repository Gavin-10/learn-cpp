#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& dog_name, const std::string& breed, int age) {
  this->dog_name = dog_name;
  this->breed = breed;
  this->age = age;
}

Dog* Dog::setName(const std::string& dog_name) {
  this->dog_name = dog_name;
  return this;
}

Dog* Dog::setBreed(const std::string& breed) {
  this->breed = breed;
  return this;
}

Dog& Dog::setAge(int age) {
  this->age = age;
  return *this;
}

void Dog::printInfo() {
  std::cout << "name: " << dog_name << ", breed: " << breed << ", age: " << age << std::endl;
}