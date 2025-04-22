
#include "FileOpener.h"

#include <string>

FileOpener::FileOpener(std::string_view path) : path(path) {};

std::string FileOpener::readFile() {
    std::ifstream file(path, std::ios::binary);
    if(file.is_open()) {
        std::string output = "";

        std::string line;
        while(std::getline(file, line)) {
            output.append(line);
        }

        return output;
    }

    return "";
}