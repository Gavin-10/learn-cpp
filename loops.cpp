#include <iostream>

int main() {
  for(unsigned int i{}; i < 100000; i++) {
    std::cout << "This is a for loop" << i << std::endl << std::flush;
  }

  std::cout << "done" << std::endl;

  int a {};
  int count {};
  bool test {true};

  std::cout << "Enter Number: ";
  std::cin >> a;

  while (test) {
    count++;
    if (count >= a) {
      test = false;
    } else {
      std::cout << "while loop running" << std::endl;
    }
  }

  count = 0;

  do {
    count++;
    std::cout << "One step ahead" << std::endl;
  } while (count <= a);

}