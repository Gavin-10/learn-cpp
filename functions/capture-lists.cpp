#include <iostream>

int main() {
  //Capture lists capture variables outside the function scope
  //Capture by value or reference
  int a{12};
  int b{8};
  int c{42};

  auto func = [a, b]() {
    std::cout << a + b << std::endl;
    std::cout << &a << std::endl;
  };

  auto func2 = [&a, &b]() {
    std::cout << a + b << std::endl;
    std::cout << &a << std::endl;
  };

  a++;
  b++;

  std::cout << &a << std::endl;
  func();
  func2();

  //to capture everything
  //This captures by value, capture by reference is [&]

  [=]() {
    std::cout << a + b + c << std::endl;
  }();
  
  return 0;
}