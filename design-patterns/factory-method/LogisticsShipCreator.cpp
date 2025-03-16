
#include "LogisticsShipCreator.h"
#include "Ship.h"

Transport* LogisticsShipCreator::createTransport() const {
    return new Ship();
}