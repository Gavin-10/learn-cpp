#include <iostream>

int main() {

  //initializes with random numbers
  int some_numbers[10];

  //initializes all to 0
  //any left over indexes will be initialized to 0
  int other_numbers[10] {};

  for(auto num : some_numbers) {
    std::cout << num << std::endl;
  }

  for(auto num: other_numbers) {
    std::cout << num << std::endl;
  }

  std::cout << "Array Size: " << std::size(some_numbers) << std::endl;
  //or
  std::cout << "Array Size: " << (sizeof(other_numbers)/sizeof(other_numbers[0])) << std::endl;

  //\0 is the null terminating character which correctly ends the array
  char message [6] {'H', 'e', 'l', 'l', 'o', '\0'};

  //initializing like this auto adds null terminating character
  char other_message [] {"you can initialize like this too"};

  std::cout << message << std::endl;
  std::cout << other_message << std::endl;

  return 0;
}