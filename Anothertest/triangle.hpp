#ifndef triangle_hpp
#define triangle_hpp

#include "point.hpp"
#include "shape.hpp"

class triangle : public shape{
public:
    triangle(point p1in, point p2in, point p3in);
    double virtual perimeter() const;
private:
    point p1;
    point p2;
    point p3;
};

#endif
