#ifndef CHILD_H_
#define CHILD_H_

#include "Parent.h"

class Child : public Parent {

  public:
    Child();
    Child(int m_var);
    ~Child();

    void print_var() const {
      std::cout << "This happened in Child" << std::endl;
      std::cout << this->m_var << std::endl;
      Parent::print_var();
    }

  private:
    int m_var{0};
};

#endif