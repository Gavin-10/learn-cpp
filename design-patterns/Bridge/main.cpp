
#include "Key.h"
#include "Subaru.h"

#include <iostream>

int main() {

    Car* brz = new Subaru("BRZ", 2013);
    Key* myKey = new Key(brz);

    myKey->lock();
    std::cout << brz->getIsLocked() << std::endl;
    myKey->unlock();
    std::cout << brz->getIsLocked() << std::endl;

    brz->detail();

    delete brz;
    delete myKey;

    return 0;
}