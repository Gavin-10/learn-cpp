#include <iostream>

void enter_bar(unsigned int age) {
  if(age > 18) {
    std::cout << "Youre: " << age << " years old" << std::endl;
  } else {
    std::cout << "Too young" << std::endl;
  }
}

int max(int a, int b) {
  return (a > b) ? a : b;
}

int lucky_number() {
  return 10;
}

std::string name_converter(char a[]) {
  std::string result = a;
  return result;
}

int main() {
  enter_bar(17);
  enter_bar(22);

  int result = max(10, 13);
  std::cout << result << std::endl;

  int result2{};
  result2 = lucky_number();
  std::cout << result2 << std::endl;

  char name [] {"Gavin"};
  std::string newName = name_converter(name);
  std::cout << newName << std::endl;

  return 0;
}