#include "Ellipse.h"

int Ellipse::m_count{0};

Ellipse::Ellipse() : Shape() {
    m_count++;
}

Ellipse::Ellipse(std::string_view description) : Shape(description) {
    m_count++;
}

Ellipse::Ellipse(double x_rad, double y_rad, std::string_view description)
    : x_rad(x_rad), y_rad(y_rad), Shape(description) {

        m_count++;
}