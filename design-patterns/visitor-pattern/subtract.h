
#pragma once

#include <memory>

#include "components.h"

class subtract: public Visitor {
public:
    int visitCompA(const std::shared_ptr<CompA>) const override;
    int visitCompB(const std::shared_ptr<CompB>) const override;
};