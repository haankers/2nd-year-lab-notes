#ifndef trianglehpp
#define trianglehpp

#include "point.hpp"
#include "shape.hpp"

class triangle : public shape{
private:
    point p1;
    point p2;
    point p3;
public:
    triangle(point p1in, point p2in, point p3in);
    virtual double perimeter() const;
};

#endif
