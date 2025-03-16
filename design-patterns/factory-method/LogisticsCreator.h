
#pragma once

#include "Transport.h"

class LogisticsCreator {
public:
    virtual Transport* createTransport() const =0;
    void transportOperation() const;
};