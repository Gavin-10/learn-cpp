
#pragma once

#include <string>

class Target {
public:
    virtual ~Target() = default;
public:
    virtual std::string request() const;
};