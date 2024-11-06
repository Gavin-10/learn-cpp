#ifndef DOG_H_
#define DOG_H_

#include <string>

class Dog {
  public:
    Dog() = default;

    Dog(const std::string& dog_name, const std::string& breed, int age);

    //opptions to return pointer (must be dereferenced therefore use ->)
    Dog* setName(const std::string& dog_name);

    Dog* setBreed(const std::string& breed);

    //option to return reference
    Dog& setAge(int age);

    void printInfo();

  private:
    std::string dog_name;
    std::string breed;
    int age{0};
};

#endif