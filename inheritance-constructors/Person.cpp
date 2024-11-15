#include "Person.h"

Person::Person() {
  std::cout << "Default called" << std::endl;
}

Person::Person(std::string_view p_fullname, int p_age, std::string_view p_address)
  : fullName(p_fullname), age(p_age), address(p_address) {

  std::cout << "Person Constructor Called" << std::endl;
}

Person::Person(const Person& person)
  : fullName(person.fullName), age(person.age), address(person.address) {

  std::cout << "Person Copy Constructor Called" << std::endl;
}

Person::~Person() {

}

std::ostream& operator << (std::ostream& out, const Person& person) {
  out << "Person: " << person.fullName << ", age: " << person.age << ", address: "
    << person.getAddress();

  return out;
}