
#include "Car.h"

Car::Car(std::string_view make, std::string_view model, int year)
    : make(make), model(model), year(year) {

}

void Car::lock() {
    isLocked = true;
}

void Car::unlock() {
    isLocked = false;
    if(alarmIsTriggered) {
        alarmIsTriggered = false;
    }
}

void Car::toggleTrunk() {
    trunkIsOpen = !trunkIsOpen;
}

void Car::panic() {
    alarmIsTriggered = true;
}

bool Car::getIsLocked() {
    return isLocked;
}

bool Car::getTrunkIsOpen() {
    return trunkIsOpen;
}

bool Car::getAlarmIsTriggered() {
    return alarmIsTriggered;
}