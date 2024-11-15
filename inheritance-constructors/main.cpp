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

  return 0;
}