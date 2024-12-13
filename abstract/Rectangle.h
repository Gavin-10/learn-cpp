#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
  public:
    Rectangle() = default;
    Rectangle(std::string_view);
    Rectangle(double, double, std::string_view);
    virtual ~Rectangle() = default;

  public:
    double perimeter() const override;
    double surface() const override;

  private:
    double width{0};
    double height{0};
};

#endif