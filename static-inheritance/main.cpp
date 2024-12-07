#include <iostream>

#include "Shape.h"
#include "Ellipse.h"

int main() {

    Ellipse e{};
    Ellipse e1("New Ellipse");
    Ellipse e2(2, 3.56, "Another New Ellipse");

    Shape s{};
    Shape s1("New Shape");

    std::cout << Shape::m_count << std::endl;
    std::cout << Ellipse::m_count << std::endl;

    Shape* shapes[] {&e, &e1, &e2, &s, &s1};

    for(auto& shape : shapes) {
        std::cout << shape->getCount() << std::endl;
    }

    return 0;
}