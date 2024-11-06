#include "Dog.h"
#include <string_view>
#include <iostream>

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param) {
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = p_age_param;
}

void Dog::print() {
  std::cout << "Name: " << name << ", breed: " << breed << ", age: " 
    << *p_age << std::endl;
}

Dog::~Dog() {
  delete p_age;
  p_age = nullptr;
  std::cout << name << " has been destructed" << std::endl;
}