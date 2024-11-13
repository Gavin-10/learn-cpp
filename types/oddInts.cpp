#include <iostream>

//ints less than 4 bytes dont support arithmatic opperations
int main() {
  short int var1 {10};
  short int var2 {20};

  char myChar {40};
  char myChar2 {50};

  std::cout << sizeof(var1) << std::endl;
  std::cout << sizeof(myChar) << std::endl;

  int result = var1 + var2;
  int result2 = myChar + myChar2;

  //implicit cast to int by compiler
  std::cout << sizeof(result) << std::endl;
  std::cout << sizeof(result2) << std::endl;

  return 0;
}