#include <iostream>

int main() {
  //a memory leak is loosing the pointer to dynamically allocated memory

  int *p_myNumber {new int{55}};

  //should delete and reset here

  int number{55};
  p_myNumber = &number;

  //double allocation

  int *p_newNum {new int{42}};

  p_newNum = new int{55};

  //not deleting pointer

  {
    int *p_anotherNum {new int{77}};
  }



  return 0;
}