
#include "components.h"
#include "abstract-factory.h"

int main() {
    components* comps = AbstractFactory::CreateComponentA();
    comps->appBar();
    comps->button();
    comps->card();

    comps = AbstractFactory::CreateComponentB();
    comps->appBar();
    comps->button();
    comps->card();

    delete comps;

    return 0;
}