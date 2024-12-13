#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {};

void Point::stream_insert(std::ostream& out) const {
  out << "Point [x: " << this->x << ", y: " << this->y << "]" << std::endl;
}