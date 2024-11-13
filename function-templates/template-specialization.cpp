#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

template <>
const char* maximum<const char*>(const char* a, const char* b) {
  return (std::strcmp(a, b) > 0) ? a : b;
}

int main() {
  const char* a{"hello"};
  const char* b{"world"};

  std::cout << maximum<double>(12, 52.9) << std::endl;
  std::cout << maximum<const char*>(a, b) << std::endl;

  return 0;
}