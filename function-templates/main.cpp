#include <iostream>

template <typename T> 
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

int main() {

  std::cout << maximum(12, 3) << std::endl;
  std::cout << maximum(12.7, 3.5) << std::endl;
  std::cout << maximum("hello", "world") << std::endl;

  return 0;
}

