#ifndef OVAL_H_
#define OVAL_H_

#include "Shape.h"

#include <string_view>

class Oval : public Shape {
  using Shape::Shape;

  public:
    Oval(double, double, std::string_view);
    ~Oval() = default;

    virtual void draw() const;

  protected:
    double getXRad() const {
      return this->x_rad;
    }

    void setXRad(double x_rad) {
      this->x_rad = x_rad;
    }

    double getYRad() const {
      return this->y_rad;
    }

    void setYRad(double y_rad) {
      this->y_rad = y_rad;
    }

  private:
    double x_rad{0.0};
    double y_rad{0.0};
};

#endif