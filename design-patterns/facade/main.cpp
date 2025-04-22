
#include "FormatFacade.h"

int main() {
    FormatFacade* f = new FormatFacade();

    f->reformatToNewFile("input.txt", 50, "output");

    delete f;

    return 0;
}