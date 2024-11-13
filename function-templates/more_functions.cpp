#include <iostream>

//prototype
int max(int, int);

int main() {
  std::cout << max(10, 12) << std::endl;

  return 0;
}

int max(int a, int b) {
  return (a > b) ? a : b;
}