
#pragma once

#include <string>
#include <string_view>

class Formatter {
public:
    Formatter(std::string_view);
public:
    std::string formatString(int);
private:
    std::string stringToFormat;
};