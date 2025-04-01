
#pragma once

#include "Totalable.h"

#include <string>
#include <string_view>

class Product: public Totalable {
public:
    Product(std::string_view, int);
    ~Product() override = default;
public:
    int getTotal() const override;
    std::string getDescription() const;
private:
    int price;
    std::string description;
};