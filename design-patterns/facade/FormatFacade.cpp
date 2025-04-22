
#include "FormatFacade.h"

FormatFacade::~FormatFacade() {
    if (opener) {
        delete opener;
        opener = nullptr;
    }

    if (formatter) {
        delete formatter;
        formatter = nullptr;
    }

    if (writer) {
        delete writer;
        writer = nullptr;
    }
}

void FormatFacade::reformatToNewFile(std::string_view oldFile, int maxColumns, std::string_view newFile) {
    opener = new FileOpener(oldFile);
    formatter = new Formatter(opener->readFile());
    writer = new FileWriter(formatter->formatString(maxColumns));
    writer->writeFile(newFile);
}