#include "person.h"

Person::Person(std::string_view fullname, int age, std::string_view address)
  : fullname(fullname), age(age), address(address) {

}

Person::~Person() {

}

std::ostream& operator << (std::ostream& out, const Person& person) {
  out << "Person: " << person.fullname << ", age: " << person.age;
  return out;
}