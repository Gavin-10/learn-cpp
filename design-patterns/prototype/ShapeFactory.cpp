
#include "ShapeFactory.h"

ShapeFactory::ShapeFactory() {
    this->shapes["circle"] = new Circle(0, 0, "red", 4);
    this->shapes["rectangle"] = new Rectangle(0, 0, "blue", 6, 8);
}

ShapeFactory::~ShapeFactory() {
    delete this->shapes["circle"];
    delete this->shapes["rectangle"];
}

ProtoShape* ShapeFactory::createShape(std::string_view type) {
    return this->shapes[std::string(type)]->clone();
}