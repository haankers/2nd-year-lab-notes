#ifndef circlehpp
#define circlehpp

#include "point.hpp"
#include "shape.hpp"

class circle : public shape{
private:
    point p1;
    double radius;
public:
    circle(point p1in, double radin);
    virtual double perimeter() const;
};

#endif

