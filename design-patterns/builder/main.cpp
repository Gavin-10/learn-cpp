
#include "director.h"
#include "ConcreteBuilder1.h"
#include "House.h"

void ClientCode(Director& director) {
    ConcreteBuilder1* builder = new ConcreteBuilder1();
    director.set_builder(builder);
    std::cout << "Base house: " << std::endl;

    director.BuildEntryHosue();
    House* entryHouse = builder->getHouse();
    entryHouse->ListParts();
    delete entryHouse;

    std::cout << "Full house: " << std::endl;
    director.BuildFullHouse();
    House* fullHouse = builder->getHouse();
    fullHouse->ListParts();
    delete fullHouse;

    delete builder;
}

int main() {
    Director* director = new Director();
    ClientCode(*director);
    delete director;
    return 0;
}