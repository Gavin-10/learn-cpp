#include <iostream>
#include <concepts>

//format options

//enforces that types are integral
template <typename T>
requires std::integral<T>
T add(T a, T b) {
  return a + b;
}

template <std::floating_point T>
T multiply(T a, T b) {
  return a * b;
}

auto subtract(std::integral auto a, std::integral auto b) {
  return a - b;
}

template <typename T>
T divide(T a, T b) requires std::floating_point<T> {
  return a / b;
}

int main() {
  std::cout << add(10, 14) << std::endl;

  std::cout << multiply(6.4, 0.7) << std::endl;

  std::cout << subtract(34, 14) << std::endl;

  std::cout << divide(11.0, 3.0) << std::endl;

  return 0;
}