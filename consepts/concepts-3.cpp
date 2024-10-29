#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) < 4;
  requires sizeof(T) < 4;
};

template <typename T>
concept Addable = requires(T a, T b) {
  {a + b} -> std::convertible_to<int>;
};

template <typename T>
requires TinyType<T>
T add(T a, T b) {
  return a + b;
}

template <typename T>
requires Addable<T>
T adds(T a, T b) {
  return a + b;
}

int main() {
  char x{67};
  char y{45};

  short int a{10};
  short int b{54};

  std::cout << add(x, y) << std::endl;
  std::cout << add(a, b) << std::endl;

  std::cout << adds(9, 3) << std::endl; 


  return 0;
}