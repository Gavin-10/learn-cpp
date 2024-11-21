#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <string_view>

class Shape {

  public:
    Shape() = default;
    Shape(std::string_view);
    ~Shape();

    void draw() const;

  protected:
    std::string description{""};

};

#endif