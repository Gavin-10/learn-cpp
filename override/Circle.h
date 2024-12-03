#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Oval.h"

#include <string_view>

class Circle : public Oval {
  using Oval::Oval;

  public:
    Circle(double, std::string_view);
    Circle(std::string_view);
    ~Circle() = default;

    virtual void draw() const override;

};

#endif