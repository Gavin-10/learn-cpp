const double PI {3.1415926535897932384626433832795};

class Cylinder {
//member variables are either stack vars or pointers
private:
  double base_radius {1.0};
  double height {1.0};

public:
  double volume() {
    return PI * base_radius * height;
  }

  double getRadius() {
    return this->base_radius;
  }

  double getHeight() {
    return this->height;
  }

  void setRadius(double rad) {
    this->base_radius = rad;
  }

  void setHeight(double height) {
    this->height = height;
  }
};