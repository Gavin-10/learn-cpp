#include <iostream>

int main() {
  //these will be allocated on the heap
  //std::size doesnt work with these

  double *p_decimalNums {new double[10]}; //will be initialized with junk values

  int *p_studentIds {new(std::nothrow) int[100]{}}; //initializes with 0 and doesnt allow throws

  const int size{5};
  double *p_testScores {new(std::nothrow) double[size]{1.0, 2.0, 3.0, 4.0, 5.0}}; //initializes first part of array, rest would be 0

  for (size_t i{}; i < size; i++) {
    std::cout << p_testScores[i] << std::endl;
  }

  //deleting array pointers

  delete[] p_decimalNums;
  p_decimalNums = nullptr;

  delete[] p_studentIds;
  p_studentIds = nullptr;

  delete[] p_testScores;
  p_testScores = nullptr;

  return 0;
}