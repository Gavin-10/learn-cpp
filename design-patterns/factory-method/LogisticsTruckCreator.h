
#pragma once

#include "Transport.h"
#include "LogisticsCreator.h"

class LogisticsTruckCreator: public LogisticsCreator {
public:
    Transport* createTransport() const override;
};