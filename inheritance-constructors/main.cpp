#include <iostream>

#include "Person.h"
#include "Engineer.h"
#include "CivilEngineer.h"

int main() {

  CivilEngineer ce("Bob", 27, "yes", 56, 20);

  //Copy constructor
  //No need to write manually if using stack memory
  CivilEngineer ce2(ce);

  Engineer* e = new Engineer("Bill", 25, "ok", 675);
  Engineer* newEngineer = new Engineer(*e);

  Engineer n1("Some name", 28, "some address");
  std::cout << n1 << std::endl;

  CivilEngineer c2("Civil Engineer", 56, "address", 12);
  std::cout << c2 << std::endl;

  return 0;
}