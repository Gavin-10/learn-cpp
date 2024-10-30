#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

//you can chain multiple requires
template <typename T>
requires std::integral<T> || std::floating_point<T>
T multiply(T a, T b) {
  return a * b;
}

template <typename T>
requires std::integral<T> && TinyType<T>
T add(T a, T b) {
  return a + b;
}

int main() {
  short int a{4};
  short int b{7};

  std::cout << add(a, b) << std::endl;
  std::cout << multiply(7.0, 3.76) << std::endl;

  return 0;
}