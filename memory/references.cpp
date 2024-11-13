#include <iostream>

int main() {
  //references reference the same memory location rather than storing a dublicate value
  //references cant change after initialization meaning it will always reference original value

  int someValue {10};

  int &ref_someValue{someValue};

  //value changes dont matter

  std::cout << ref_someValue << std::endl;

  someValue = 34;

  std::cout << ref_someValue << std::endl;

  ref_someValue = 45;

  std::cout << someValue << std::endl;

  return 0;
}