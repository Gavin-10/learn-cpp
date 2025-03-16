
#include "LogisticsCreator.h"
#include "LogisticsShipCreator.h"
#include "LogisticsTruckCreator.h"

void ClientCode(const LogisticsCreator& creator) {
    creator.transportOperation();
}

int main() {
    LogisticsCreator* ships = new LogisticsShipCreator();
    ClientCode(*ships);
    LogisticsCreator* trucks = new LogisticsTruckCreator();
    ClientCode(*trucks);

    delete ships;
    delete trucks;

    return 0;
}