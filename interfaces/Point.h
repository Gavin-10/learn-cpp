#ifndef POINT_H_
#define POINT_H_

#include "StreamInsertable.h"

class Point : public StreamInsertable {
  public:
    Point() = default;
    Point(double, double);
    ~Point() = default;

  public:
    void stream_insert(std::ostream&) const override;

  private:
    double x{0};
    double y{0};
};

#endif