
#pragma once

#include <string>
#include <string_view>
#include <fstream>

class FileWriter {
public:
    FileWriter(std::string_view);
public:
    void writeFile(std::string_view);
private:
    std::string contents;
};
