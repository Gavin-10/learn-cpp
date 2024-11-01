const double PI {3.1415926535};

class Cylinder {
public:
  Cylinder() {
    this->base_radius = 1.0;
    this->height = 1.0;
  };

  Cylinder(double radius, double height) {
    this->base_radius = radius;
    this->height = height;  
  }

  double volume() {
    return PI * base_radius * height;
  }

  double getHeight() {
    return this->height;
  }

  double getRadius() {
    return this->base_radius;
  }

private:
  double base_radius;
  double height;
};