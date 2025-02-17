
#include "subtract.h"

int subtract::visitCompA(const std::shared_ptr<CompA> compa) const {
    return compa->a - compa->b - compa->c;
}

int subtract::visitCompB(const std::shared_ptr<CompB> compb) const {
    return compb->a - compb->b;
}