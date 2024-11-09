#include "Person.h"

Person::Person() {

}

Person::Person(const std::string& first_name, const std::string& last_name)
  : first_name(first_name), last_name(last_name) {

}

std::ostream& operator << (std::ostream& out, const Person& person) {
  out << "Person: " << person.first_name << " " << person.last_name;
  return out;
}

Person::~Person() {

}