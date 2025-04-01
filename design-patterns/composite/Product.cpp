
#include "Product.h"

Product::Product(std::string_view description, int price)
    : description(description), price(price) {

}

int Product::getTotal() const {
    return price;
}

std::string Product::getDescription() const {
    return description;
}