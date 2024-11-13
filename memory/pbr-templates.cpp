#include <iostream>

//Syntax for pass by reference decl
//becuase references are read only you cannot modify them
template <typename T> 
const T& maximum(const T& a, const T& b) {
  std::cout << "a in func: " << &a << std::endl;
  std::cout << "b in func: " << &b << std::endl;
  return (a > b) ? a : b;
}

int main() {
  double a{10.6};
  double b{24.756};

  std::cout << "a: " << &a << std::endl;
  std::cout << "b: " << &b << std::endl;

  std::cout << maximum<double>(a, b) << std::endl;

  return 0;
}