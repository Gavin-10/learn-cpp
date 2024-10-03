#include <iostream>
#include <cstring>

int main() {
  const char message[] {"This is a new message"};

  const char *message2 {"This is another message"};

  std::cout << "Length of 1: " << std::strlen(message) << std::endl;
  //still works on decayed arrays
  std::cout << "Length of 2: " << std::strlen(message2) << std::endl;

  //includes null character
  std::cout << "Length of 2: " << sizeof(message2) << std::endl;

  //string compare

  const char *state {"Georgia"};
  const char *stateTwo {"California"};
  //prints 0 if equal
  std::cout << "Compared strings" << std::strcmp(state, stateTwo) << std::endl;

  //finding first occurence of character

  const char *const sentence {"sally sells sea shells by the sea shore"};
  char target {'s'};
  const char *result = sentence;
  int count {};

  while((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found s starting at" << result << std::endl;

    //jumps to next character in string
    ++result;
    ++count;
  }

  std::cout << "Count: " << count << std::endl;

  const char newSentence[] {"where will the g be"};
  std::cout << std::strchr(newSentence, 'g') << std::endl;
  const char *p_sentence = newSentence;
  std::cout << ++p_sentence << std::endl;

  //find last character
  char input[] = "/home/documents/projects/MyProgram.ts";
  std::cout << std::strchr(input, '/') << std::endl;
  char *output = std::strrchr(input, '/');
  std::cout << ++output << std::endl;

  //Concatenation

  char words1[50] = "Hello ";
  char words2[50] = "There";

  //make sure destination string is big enough

  std::strcat(words1, words2);
  std::strcat(words1, " Good bye");
  std::cout << words1 << std::endl;

  char moreWords[50] = "Hello There ";
  char evenMoreWords[50] = "Good bye";

  std::strncat(moreWords, evenMoreWords, 4);
  std::cout << moreWords << std::endl;

  //copying strings

  char *dest = new char[std::strlen(moreWords) + 1] {'H', 'e', 'l', 'l', 'o'};
  std::strcpy(dest, moreWords);
  std::cout << dest << std::endl;

  char *dest2 = new char[50];

  std::strncpy(dest2, moreWords, 11);
  std::cout << dest2 << std::endl;

  
  return 0;
}