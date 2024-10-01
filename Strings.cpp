#include <iostream>

int main() {
  //check if character is alphanumeric

  std::cout << "This is alphanumeric" << std::isalnum('G') << std::endl;
  std::cout << "This isnt" << std::isalnum('&') << std::endl;

  //check if character is alphabetic

  std::cout << "This is alphabetic" << std::isalpha('A') << std::endl;
  std::cout << "This isnt" << std:: isalpha('5') << std::endl;

  //check if character is a space

  char message[] {"This is a new message"};

  for(size_t i{}; i < std::size(message); i++) {
    if(std::isblank(message[i])) {
      std::cout << "This is a blank" << message[i] << std::endl;
    } else {
      std::cout << "This isnt" << message[i] << std::endl;
    }
  }

  //checking case

  int uppercase {};
  int lowercase {};

  for(auto c : message) {
    if(std::islower(c)) {
      lowercase++;
    } else if (std::isupper(c)) {
      uppercase++;
    } else {
      std::cout << "da fuq" << std::endl;
    }
  }

  //to upper case

  for(size_t i{}; i < std::size(message); i++) {
    message[i] = std::toupper(message[i]);
  }

  std::cout << message << std::endl;

  //to lower case

  for(size_t i{}; i < std::size(message); i++) {
    message[i] = std::tolower(message[i]);
  }

  std::cout << message << std::endl;

  //find digits

  std::cout << "This is a didgit" << std::isdigit('5') << std::endl;

  return 0;
}