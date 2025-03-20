
#pragma once

#include <string>

class Adaptee {
public:
    ~Adaptee() = default;
public:
    std::string adapteeRequest() const;
};