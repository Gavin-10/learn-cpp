
#include "LogisticsCreator.h"

void LogisticsCreator::transportOperation() const {
    Transport* transport = this->createTransport();
    transport->deliver();
    delete transport;
}