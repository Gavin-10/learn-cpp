#include "person.h"

Person::Person(std::string_view first_name, std::string_view last_name) 
  : first_name(first_name), last_name(last_name) {

}

Person::~Person() {

}

std::ostream& operator << (std::ostream& out, const Person& person) {
  out << "Person: " << person.first_name << " " << person.last_name;
  return out;
}