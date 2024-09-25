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

  //String literal initialization
  //turns into array, then holds pointer
  const char* p_message {"Hello There"};

  std::cout << p_message << std::endl;

  //Never initialize pointer to bs data. Possible data corruption
  //NEVER use uninitialized pointer
  //stack memory lifecycle isnt controlled by program
  //Heap memory is however

  //memory put on heap
  //you can access this outside of usual scope
  int* p_myVar {new int};

  //deinitialize
  delete p_myNum;
  p_myVar = nullptr;

  //do not call delete twice (bad)
  //хрен знает то что происходится



  return 0;
}