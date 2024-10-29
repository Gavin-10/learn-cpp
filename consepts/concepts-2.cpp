#include <iostream>
#include <concepts>

//making your own concepts
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
requires MyIntegral<T>
T add(T a, T b) {
  return a + b;
}

//keep in mind this only validates syntax
template <typename T>
concept divisable = requires(T a, T b) {
  a / b;
};

template <typename T>
requires divisable<T>
T divide(T a, T b) {
  return a / b;
}

int main() {
  std::cout << add(73, 29) << std::endl;

  std::cout << divide(9, 3) << std::endl;

  return 0;
}