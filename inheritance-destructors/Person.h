#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <string_view>

class Person {
  friend std::ostream& operator << (std::ostream& out, const Person& person);

  public:

    Person();
    Person(std::string_view p_fullname, int p_age, std::string_view p_address);
    Person(const Person& person); // not inheritable
    ~Person();

    void setFullName(std::string_view fullname) {
      this->fullName = fullName;
    }

    int getAge() const {
      return this->age;
    }

    void setAge(int age) {
      this->age = age;
    }

    std::string getAddress() const {
      return this->address;
    }

    void setAddress(std::string_view address) {
      this->address = address;
    }
  
  protected:
    std::string fullName{""};
    int age{0};

  private:
    std::string address{""};
};

#endif