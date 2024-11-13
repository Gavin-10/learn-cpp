#include <iostream>

int main() {
  //Pretty standard stuff

  //adding

  int num1 {10};
  int num2 {8};
  int result {num1 + num2};
  int result2 {10 + 8};

  std::cout << result << result2 << std::endl;

  //subtract

  int subtract {num1 - num2};
  unsigned int whatHappens {num2 - num1};

  std::cout << subtract << whatHappens << std::endl;

  //multiply

  int multiplying {num1 * num2};

  std::cout << multiplying << std::endl;

  //dividing

  int noDecimal {num1 / num2};
  double withDecimal {double(num1) / double(num2)};

  std::cout << noDecimal << withDecimal << std::endl;

  //modulus

  int myRelult {num1 % num2};

  std::cout << myRelult << std::endl;

  return 0;
}