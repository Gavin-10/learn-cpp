#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <string_view>

class Person {
  friend std::ostream& operator << (std::ostream& out, const Person& person);

  public:
    Person() = default;
    Person(std::string_view first_name, std::string_view last_name);
    ~Person();

    std::string getFirstName() const {
      return this->first_name;
    }

    void setFirstName(std::string_view first_name) {
      this->first_name = first_name;
    }

    std::string getLastName() const {
      return this->last_name;
    }

    void setLastName(std::string_view last_name) {
      this->last_name = last_name;
    }
  
  protected:
    std::string first_name{""};
    std::string last_name{""};

};

#endif