#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder {
  private:
    double radius{1.0};
    double height{1.0};

  public:
    Cylinder() = default;
    Cylinder(double radius, double height);

    double volume();

    double getRadius();
    void setRadius(double radius);

    double getHeight();
    void setHeight(double height);
};

#endif