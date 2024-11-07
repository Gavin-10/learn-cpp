#ifndef DOG_H_
#define DOG_H_

#include <string>
#include <string_view>

class Dog {
  std::string m_name;
  int m_age;

  public:
    Dog() = default;

    std::string getName();
    int getAge();

    void setName(std::string_view name);
    void setAge(int age);

    void printInfo();
};

#endif