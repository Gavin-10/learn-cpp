#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <string_view>

class Shape {
    public:
        Shape();
        Shape(std::string_view);
        virtual ~Shape() = default;

        void draw() const;

        virtual int getCount() const {
            return m_count;
        }

        static int m_count;
    
    protected:
        std::string description{""};
};

#endif