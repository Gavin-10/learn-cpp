
#include "ProtoShape.h"

ProtoShape::ProtoShape() : x(0), y(0), color("black") {};

ProtoShape::ProtoShape(int x, int y, std::string_view color) 
    : x(x), y(y), color(color) {
}

