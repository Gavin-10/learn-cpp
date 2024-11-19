#ifndef PARENT_H_
#define PARENT_H_

#include <iostream>

class Parent {

  public:
    Parent();
    Parent(int m_var);
    ~Parent();

    void print_var() const {
      std::cout << this->m_var << std::endl;
    }

  private:
    int m_var{0};

};

#endif