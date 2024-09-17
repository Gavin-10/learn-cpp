#include <iostream>

int main() {
  int a {2};
  int b {3};
  int c {4};

  //very standard
  if (a > b) {
    std::cout << "greater than" << std::endl;
  } else if(a < b) {
    std::cout << "less than" << std::endl;
  } else {
    std::cout << "equal" << std::endl;
  }

  
}