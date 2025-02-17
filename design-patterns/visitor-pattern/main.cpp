
#include <iostream>
#include <memory>

#include "adder.h"
#include "subtract.h"
#include "components.h"

int main() {
    std::unique_ptr<Component> a = std::make_unique<CompA>(4, 5, 6);
    std::unique_ptr<Component> b = std::make_unique<CompB>(2, 3);

    std::shared_ptr<adder> add = std::make_shared<adder>();
    std::shared_ptr<subtract> sub = std::make_shared<subtract>();

    std::cout << a->accept(add) << std::endl;
    std::cout << b->accept(add) << std::endl; 

    std::cout << a->accept(sub) << std::endl;
    std::cout << b->accept(sub) << std::endl;
}