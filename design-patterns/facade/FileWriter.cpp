
#include "FileWriter.h"

FileWriter::FileWriter(std::string_view contents) : contents(contents) {};

void FileWriter::writeFile(std::string_view fileName) {
    std::string textFileName = std::string(fileName).append(".txt");
    std::ofstream(textFileName, std::ios::binary) << contents;
}