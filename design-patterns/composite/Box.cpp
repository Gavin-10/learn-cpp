
#include "Box.h"

Box::Box(std::vector<Totalable*> items): items(items) {};

int Box::getTotal() const {
    int total = 0;

    for(Totalable* item: items) {
        total += item->getTotal();
    }

    return total;
}