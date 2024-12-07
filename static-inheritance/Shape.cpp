#include "Shape.h"

#include <iostream>

int Shape::m_count{0};

Shape::Shape() {
    m_count++;
}

Shape::Shape(std::string_view description) : description(description) {
    m_count++;
}

void Shape::draw() const {
    std::cout << "Shape::draw: " << this->description << std::endl;
}