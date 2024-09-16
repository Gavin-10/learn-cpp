#include <iostream>
#include <cmath>

int main() {

  double myNum {5.6};
  int myNegative {-45};

  std::cout << std::floor(myNum) << std::endl;
  std::cout << std::ceil(myNum) << std::endl;

  std::cout << std::abs(myNegative) << std::endl;

  std::cout << std::exp(myNum) << std::endl; //raises e ^ n
  std::cout << std::exp2(myNum) << std::endl; //raises 2 ^ n
  std::cout << std::log(myNum) << std::endl; //does ln(n)
  std::cout << std::log10(myNum) << std::endl; //does normal log(n)

  std::cout << std::pow(3, 2) << std::endl;
  std::cout << std::sqrt(49) << std::endl;
  std::cout << std::round(myNum) << std::endl;

  return 0;
}