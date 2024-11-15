#include "Engineer.h"

Engineer::Engineer() {
  std::cout << "Default called on Engineer" << std::endl;
}

Engineer::Engineer(std::string_view p_fullname, int p_age, std::string_view p_address, int p_contracts)
  : Person(p_fullname, p_age, p_address), contractCount(p_contracts) {

  std::cout << "Engineer Constructor Called" << std::endl;
}

Engineer::Engineer(const Engineer& engineer)
  : Person(engineer), contractCount(engineer.contractCount ) {

  std::cout << "Engineer Copy Constructor Called" << std::endl;
}

Engineer::~Engineer() {

}

std::ostream& operator << (std::ostream& out, const Engineer& e) {
  out << "Engineer: " << e.fullName << ", contracts: " << e.contractCount;

  return out;
}