
#include "Adaptee.h"
#include "Target.h"
#include "Adapter.h"

#include <iostream>

int main() {
    Target* t = new Target();
    std::cout << t->request() << std::endl;

    Adaptee* ae = new Adaptee();
    std::cout << ae->adapteeRequest() << std::endl;

    Adapter* ar = new Adapter(ae);
    std::cout << ar->request() << std::endl;

    delete t;
    delete ae;
    delete ar;

    return 0;
}