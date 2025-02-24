
#pragma once

#include "components.h"

class componentA : public components {
public:
    componentA() = default;
    virtual ~componentA() = default;
public:
    void button() const override;
    void appBar() const override;
    void card() const override;
};