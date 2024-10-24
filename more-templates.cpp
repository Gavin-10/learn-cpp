#include <iostream>

template <typename T>
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

int main() {
  //we can explicitly say what type we should use with angle brakets

  int a{10};
  double b{13.7};

  std::cout << maximum<double>(a, b) << std::endl;

  return 0;
}