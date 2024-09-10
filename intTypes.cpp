#include <iostream>
#include <iomanip>

void printSize(int num) {
  std::cout <<"size in bytes: " << sizeof(num) << std::endl;
}

int main() {
  int elephant_count;

  int lion_count{};

  int dog_count{10};

  int functional (1);

  int getsChopped (2.3);

  std::cout << "first variable: " << elephant_count << std::endl;
  std:: cout << "Second variable: " << lion_count << std::endl;
  std::cout << "Third variable: " << dog_count << std::endl;
  std::cout << "Fourth variable: " << functional << std::endl;
  std::cout << "Fifth variable: " << getsChopped << std::endl;

  //checking int size

  std::cout <<"size of int: " << sizeof(int) << std::endl;
  std::cout << "size of var 1: " << sizeof(dog_count) << std::endl;

  //modifiers

  signed int myNum{10}; // ints are signed by default
  unsigned int moreRange{6000000};

  signed short int halfOfInt{8};
  long int twoTimesOfInt{9432750};
  long long int ohMyBigNumber{984372082345};

  printSize(halfOfInt);

  std::cout << sizeof(signed short) << std::endl;

  //floats and precisions

  float myDecimal {1.543f};
  double myDecimal2 {1.76345654};
  long double myPreciseNum {9.945023740723547902L};

  //you can divide these by zero???

  std::cout << std::setprecision(20);
  std::cout << (myDecimal2 / 0) << std::endl;
  std::cout << myDecimal << std::endl;

  return 0;
}