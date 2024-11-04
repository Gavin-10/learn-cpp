class Circle {
  private:
    double radius{1.0};
    const double PI{3.1415926535};

  public:
    Circle() = default;
    Circle(double radius) {
      this->radius = radius;
    }

    double area() {
      return this->radius * this->radius * PI;
    }

    double getRadius() {
      return this->radius;
    }

    void setRadius(double newValue) {
      this->radius = newValue;
    }
};