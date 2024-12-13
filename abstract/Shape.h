#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <string_view>

class Shape {
  public:
    virtual ~Shape() = default;

  public:
    virtual double perimeter() const =0;
    virtual double surface() const =0;

  public:
    std::string getDescription() {
      return this->description;
    }

  protected:
    Shape() = default;
    Shape(std::string_view);

  private:
    std::string description;
};

#endif