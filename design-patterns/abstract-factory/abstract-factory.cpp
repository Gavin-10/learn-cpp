
#include "abstract-factory.h"

    components* AbstractFactory::CreateComponentA() {
        return new componentA();
    }

    components* AbstractFactory::CreateComponentB() {
        return new componentB;
    }