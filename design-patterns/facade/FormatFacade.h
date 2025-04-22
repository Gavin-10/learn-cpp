
#pragma once

#include "FileOpener.h"
#include "FileWriter.h"
#include "Formatter.h"

class FormatFacade {
public:
    FormatFacade() = default;
    ~FormatFacade();
public:
    void reformatToNewFile(std::string_view, int, std::string_view);
private:
    FileOpener* opener;
    Formatter* formatter;
    FileWriter* writer;
};