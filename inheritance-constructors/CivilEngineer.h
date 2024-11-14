#ifndef CIVILENGINEER_H_
#define CIVILENGINEER_H_

#include <iostream>
#include <string>
#include <string_view>

#include "Engineer.h"

class CivilEngineer : public Engineer {

  friend std::ostream& operator << (std::ostream& out, const CivilEngineer& ce);

  public:
    CivilEngineer();
    CivilEngineer(std::string_view p_fullname, int p_age, std::string_view p_address, int p_contracts, int p_clients);
    ~CivilEngineer();

  private:
    int clientCount{0};

};

#endif