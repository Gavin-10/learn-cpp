#include "Parent.h"

Parent::Parent() {
  std::cout << "Default called on Parent" << std::endl;
}

Parent::Parent(int m_var) : m_var(m_var) {};

Parent::~Parent() {
  std::cout << "Destructor called on Parent" << std::endl;
}