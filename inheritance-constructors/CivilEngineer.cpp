#include "CivilEngineer.h"

CivilEngineer::CivilEngineer() {
  std::cout << "default called on Civil" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view p_fullname, int p_age, std::string_view p_address, int p_contracts, int p_clients)
  : Engineer(p_fullname, p_age, p_address, p_contracts), clientCount(p_clients) {

  std::cout << "CivilEngineer Constructor Called" << std::endl;
}

CivilEngineer::~CivilEngineer() {

}

std::ostream& operator << (std::ostream& out, const CivilEngineer& ce) {
  out << "Engineer: " << ce.fullName << ", contracts: " << ce.clientCount;

  return out;
}