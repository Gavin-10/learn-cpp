#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Oval.h"

#include <string_view>

class Circle : public Oval {

  public:
    Circle() = default;
    Circle(double, std::string_view);
    Circle(std::string_view);
    ~Circle();

    virtual void draw() const;
};

#endif