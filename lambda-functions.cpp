#include <iostream>

int main() {

  auto myFunc = []() {
    std::cout << "Hello World" << std::endl;
  };

  myFunc();

  []() {
    std::cout << "Hello again" << std::endl;
  }();

  auto adder = [](double a, double b) -> double {
    return a + b;
  };

  auto result = [](double a, double b) -> double {
    std::cout << a/b << std::endl;
    return a / b;
  }(21, 7);

  std::cout << adder(14.3, 23.6) << std::endl;
  std::cout << adder(12, 50) << std::endl;
  std::cout << result << std::endl;

  return 0;
}