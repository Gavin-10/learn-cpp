
#include "Key.h"

Key::Key(Car* car) : car(car) {};

Key::~Key() {
    delete this->car;
    car = nullptr;
}

bool Key::lock() {
    car->lock();
    return car->getIsLocked();
}

bool Key::unlock() {
    car->unlock();
    return car->getIsLocked();
}

bool Key::panic() {
    car->panic();
    return car->getAlarmIsTriggered();
}

bool Key::openTrunk() {
    car->toggleTrunk();
    return car->getTrunkIsOpen();
}