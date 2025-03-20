
#pragma once

#include "Target.h"
#include "Adaptee.h"

#include <string>

class Adapter: public Target {
public:
    Adapter(Adaptee*);
    ~Adapter() override;
public:
    std::string request() const override;
private:
    Adaptee* adaptee;
};