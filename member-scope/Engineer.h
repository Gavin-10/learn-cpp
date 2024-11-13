#ifndef ENGINEER_H_
#define ENGINEER_H_

#include <iostream>
#include <string_view>

#include "person.h"

//using keyword can resotre original access
//cannot upgrade from original access level though ex: private cant go to public

class Engineer : private Person {
  friend std::ostream& operator << (std::ostream& out, const Engineer& engineer);

  public:
    Engineer() = default;
    Engineer(std::string_view fullname, int age, std::string_view address, int cc);
    ~Engineer();

  //cant
  /*
  public:
    using Person::address;
  */

  //this also works for functions
  protected:
    using Person::getFullName;
    using Person::getAge;
    using Person::getAddress;

  public:
    using Person::fullname;

  protected:
    int contractCount{0};

};

#endif