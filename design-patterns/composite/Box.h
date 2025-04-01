
#pragma once

#include "Totalable.h"

#include <vector>

class Box: public Totalable {
public:
    Box(std::vector<Totalable*>);
    ~Box() = default;
public:
    int getTotal() const override;
private:
    std::vector<Totalable*> items;
};