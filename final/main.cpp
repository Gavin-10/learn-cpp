#include <iostream>

#include "Cat.h"

int main() {
    Cat *c = new Cat("short hair", "smush face");

    c->breath();

    return 0;
}