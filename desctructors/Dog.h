#ifndef DOG_H_
#define DOG_H_

#include <string>
#include <string_view>

class Dog {
  public:
    Dog() = default;

    Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);

    //destructor
    ~Dog();

    void print();

  private:
    std::string name;
    std::string breed;
    int* p_age{nullptr};
};

#endif