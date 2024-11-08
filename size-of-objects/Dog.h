#ifndef DOG_H_
#define Dog_H_

#include <iostream>

class Dog {
  public:
    Dog() = default;

  private:
    size_t leg_count;
    size_t arm_count;
};

#endif