#include <iostream>

int main() {
  /*
  three types of dangling pointers:
  uninitialized
  deleted
  multiple pointers to same memory

  solutions:
  always initialize pointers
  reset pointers after delete
  make sure owner pointer is clear
  */

  std::cout << "solution 1:" << std::endl;

  int *p_my_ptr{};
  int *p_my_heap_ptr{new int{56}};

  std::cout << "solution 2:" << std::endl;

  int *p_mynum{new int{73}};

  std::cout << "pointer to: " << *p_mynum << std::endl;

  delete p_mynum;
  p_mynum = nullptr;

  std::cout << "solution 3:" << std::endl;

  int my_num{32};
  int *p_ptr3{&my_num};
  int *p_ptr4{p_ptr3};

  //check against master pointer
  if(p_ptr3 != nullptr) {
    std::cout << "ptr4: " << *p_ptr4 << std::endl;
  }

  //WHEN NEW FAILS
  //this is very rare and isnt always handled

  for (size_t i{}; i < 10000000; i++) {
    try {
      int *p_lotsOfInts {new int[100000]};
    } catch (std::exception& ex) {
      std::cout << "caught: " << ex.what() << std::endl;
    }
  }

  //or

  for (size_t i{}; i < 10000000; i++) {
    int *p_lotsMoreInts{ new(std::nothrow) int[100000000]};

    if (p_lotsMoreInts == nullptr) {
      std::cout << "malloc failed" << std::endl;
    } else {
      std::cout << "malloc succeeded" << std::endl;
      std::cout << "address: " << p_lotsMoreInts << std::endl;
    }
  }


  return 0;
}