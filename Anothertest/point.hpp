#ifndef point_hpp
#define point_hpp

#include <stdio.h>

class point{
public:
    point(double xin, double yin);
    friend double distance(const point& p1, const point& p2);
private:
    double x;
    double y;
};

#endif
