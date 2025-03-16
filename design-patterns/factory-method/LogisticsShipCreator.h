
#pragma once

#include "Transport.h"
#include "LogisticsCreator.h"

class LogisticsShipCreator: public LogisticsCreator {
public:
    Transport* createTransport() const override;
};