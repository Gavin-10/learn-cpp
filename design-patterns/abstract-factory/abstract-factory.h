
#pragma once

#include "components.h"
#include "componentB.h"
#include "componentA.h"

class AbstractFactory {
public:
    static components* CreateComponentA();
    static components* CreateComponentB();
};