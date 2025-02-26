
#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1() {
    this->reset();
}

ConcreteBuilder1::~ConcreteBuilder1() {
    delete house;
}

void ConcreteBuilder1::reset() {
    this->house = new House();
}

void ConcreteBuilder1::buildDescription() const {
    this->house->description = "this is a new hosue for sale";
}

void ConcreteBuilder1::buildRooms() const {
    this->house->numRooms = 5;
}

void ConcreteBuilder1::buildWindows() const {
    this->house->numWindows = 20;
}

void ConcreteBuilder1::buildColor() const {
    this->house->color = "grey";
}

void ConcreteBuilder1::buildGarden() const {
    this->house->garage = true;
}

void ConcreteBuilder1::buildGarage() const {
    this->house->garage = true;
    this->house->numCars = 2;
}

House* ConcreteBuilder1::getHouse() {
    House* result = this->house;
    this->reset();
    return result;
}