#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
  public:
    Circle() = default;
    Circle(std::string_view);
    Circle(double, std::string_view);
    virtual ~Circle() = default;

  public:
    double perimeter() const override;
    double surface() const override;

  private:
    double radius{0};

    inline static double PI{3.1415926535};
};

#endif