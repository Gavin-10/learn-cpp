#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include "Shape.h"

#include <string>
#include <string_view>

class Ellipse : public Shape {
    public:
        Ellipse();
        Ellipse(std::string_view);
        Ellipse(double, double, std::string_view);
        ~Ellipse() = default;


        int getCount() const override {
            return m_count;
        }

        static int m_count;

    private:
        double x_rad{0};
        double y_rad{0};

};

#endif