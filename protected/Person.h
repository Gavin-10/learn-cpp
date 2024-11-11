#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

class Person {
  friend std::ostream& operator << (std::ostream& out, const Person& person);

  public:
    Person() = default;
    Person(const std::string& first_name, const std::string& last_name);
    ~Person();

    std::string getFirstName() const {
      return this->first_name;
    }

    void setFirstName(const std::string& first_name) {
      this->first_name = first_name;
    }

    std::string getLastName() const {
      return this->last_name;
    }

    void setLastName(const std::string& last_name) {
      this->last_name = last_name;
    }

  protected:
    std::string first_name;
    std::string last_name;

};

#endif