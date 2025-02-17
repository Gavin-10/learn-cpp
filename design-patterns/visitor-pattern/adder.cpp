
#include "adder.h"

int adder::visitCompA(const std::shared_ptr<CompA> compa) const {
    return compa->a + compa->b + compa->c;
}

int adder::visitCompB(const std::shared_ptr<CompB> compb) const {
    return compb->a + compb->b;
}