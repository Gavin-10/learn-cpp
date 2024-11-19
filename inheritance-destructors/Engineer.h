#ifndef ENGINEER_H_
#define ENGINEER_H_

#include <iostream>
#include <string>
#include <string_view>

#include "Person.h"

class Engineer : public Person {

  using Person::Person;

  friend std::ostream& operator << (std::ostream& out, const Engineer& e);

  public:
    //Engineer(); no longer needed
    Engineer(std::string_view p_fullname, int p_age, std::string_view p_address, int p_contracts);
    Engineer(const Engineer& engineer);
    ~Engineer();

  protected:
    int contractCount{0};

};

#endif