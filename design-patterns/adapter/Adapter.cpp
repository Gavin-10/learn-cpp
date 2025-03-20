
#include "Adapter.h"

#include <algorithm>

Adapter::Adapter(Adaptee* adaptee) : adaptee(adaptee) {};

Adapter::~Adapter() {
    delete this->adaptee;
}

std::string Adapter::request() const {
    std::string to_reverse = this->adaptee->adapteeRequest();
    std::reverse(to_reverse.begin(), to_reverse.end());
    return "Translated: " + to_reverse;
}