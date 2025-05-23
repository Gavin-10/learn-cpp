
#include "DogHandler.h"
#include "CatHandler.h"


int main() {
  DogHandler* dog = new DogHandler();
  CatHandler* cat = new CatHandler();

  dog->setNext(cat);

  dog->handle("hello");

  delete dog;

  return 0;
}