#include "ShapeFactory.h"

int main() {
    ShapeFactory* factory = new ShapeFactory();
    ProtoShape* circleCopy = factory->createShape("circle");
    ProtoShape* rectangleCopy = factory->createShape("rectangle");

    circleCopy->printSomething();
    rectangleCopy->printSomething();


    delete factory;
    delete circleCopy;
    delete rectangleCopy;

    return 0;
}