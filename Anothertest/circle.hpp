#ifndef circlehpp
#define circlehpp

#include "point.hpp"
#include "shape.hpp"

class circle : public shape {
public:
    circle(point pin, double radin);
    double virtual perimeter() const;
private:
    point p;
    double radius;
};

#endif

