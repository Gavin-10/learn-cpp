#include "Child.h"

Child::Child() {
  std::cout << "Default called on Child" << std::endl;
}

Child::Child(int m_var) : m_var(m_var) {};

Child::~Child() {
  std::cout << "Destructor called on Child" << std::endl;
}