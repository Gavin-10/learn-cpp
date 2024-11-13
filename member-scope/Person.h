#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <string_view>

class Person {
  friend std::ostream& operator << (std::ostream& out, const Person& person);

  public:
    Person() = default;
    Person(std::string_view fullname, int age, std::string_view address);
    ~Person();

    std::string getFullName() const {
      return this->fullname;
    }
    
    std::string getAddress() const {
      return this->address;
    }

    void setAddress(std::string_view address) {
      this->address = address;
    }

    int getAge() const {
      return this->age;
    } 

  public:
    std::string fullname;

  protected:
    int age{0};
  
  private:
    std::string address{""};
};

#endif