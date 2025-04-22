
#pragma once

#include <string>
#include <string_view>
#include <fstream>

class FileOpener {
public:
    FileOpener(std::string_view);
public:
    std::string readFile();
private:
    std::string path;
};