#ifndef CYLINDER_H_
#define CYLINDER_H_

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