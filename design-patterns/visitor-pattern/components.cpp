
#include "components.h"

CompA::CompA(int a, int b, int c) : a(a), b(b), c(c) {};

int CompA::accept(std::shared_ptr<Visitor> visitor) const {
    return visitor->visitCompA(std::make_shared<CompA>(*this));
}

CompB::CompB(int a, int b) : a(a), b(b) {};

int CompB::accept(std::shared_ptr<Visitor> visitor) const {
    return visitor->visitCompB(std::make_shared<CompB>(*this));
}