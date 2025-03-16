
#include "LogisticsTruckCreator.h"
#include "Truck.h"

Transport* LogisticsTruckCreator::createTransport() const {
    return new Truck();
}