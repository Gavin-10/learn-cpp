
#include "Formatter.h"

Formatter::Formatter(std::string_view stringToFormat) : stringToFormat(stringToFormat) {};

std::string Formatter::formatString(int columns) {
    std::string newString = "";
    for(int i = 0; i < stringToFormat.length(); i++) {
        if (stringToFormat.at(i) == '\0') {
            break;
        }

        if (i % columns == 0) {
            newString += '\n';
            newString += stringToFormat.at(i);
        } else {
            newString += stringToFormat.at(i);
        }
    }

    return newString;
}