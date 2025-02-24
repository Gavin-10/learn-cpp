
#pragma once

#include "components.h"

class componentB : public components {
public:
    componentB() = default;
    virtual ~componentB() = default;
public:
    void button() const override;
    void appBar() const override;
    void card() const override;
};