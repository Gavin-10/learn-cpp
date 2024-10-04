#include <iostream>
#include <string>

int main() {
  std::string name; //empty string
  std::string greeting {"Hello There and welcome"};
  std::string message {"Hello There", 5}; //initializes with part of a string

  std::string random(7, 'G'); //adds G 7 times

  std::string saying_welcome {greeting, 16, 7}; // start at index 6, take 7 chars 

  std::cout << saying_welcome << std::endl;
  std::cout << random << std::endl;
  std::cout << message << std::endl;

  message = "This is a much longer message now";

  std::cout << message << std::endl;

  return 0;
}