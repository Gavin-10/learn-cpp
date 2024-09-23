#include <iostream>

int main() {
  //pointers store the address of other variables
  //MUST DECLARE WITH SAME TYPE
  //all pointers are the same size
  //every poitner will be 8 bytes

  //implicit
  int* p_number {};
  //explicit
  int* p_number2 {nullptr};

  int myNum {10};
  int* p_myNum {&myNum}; //& = address operator

  std::cout << p_myNum << std::endl;

  //dereferencing a pointer:
  //(ooooooo cool)

  std::cout << *p_myNum << std::endl;

  return 0;
}