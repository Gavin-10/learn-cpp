#include "Engineer.h"

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int cc)
  : contractCount(cc) {
  this->fullname = fullname;
  this->age = age;
  this->setAddress(address);
}

Engineer::~Engineer() {

}

std::ostream& operator << (std::ostream& out, const Engineer& engineer) {
  out << "Engineer: " << engineer.fullname << ", age: " << engineer.age << ", contracts: " << engineer.contractCount;

  return out;
}