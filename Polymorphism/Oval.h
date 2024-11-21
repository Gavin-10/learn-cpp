#ifndef OVAL_H_
#define OVAL_H_

#include <string_view>

#include "Shape.h"

class Oval : public Shape {
  using Shape::Shape;

  public:
    Oval(double, double, std::string_view);
    ~Oval();

    void draw() const;

  protected:
    double getXRad() const {
      return this->x_rad;
    }

    double getYRad() const {
      return this->y_rad;
    }

  private:
    double x_rad{0};
    double y_rad{0};
};

#endif