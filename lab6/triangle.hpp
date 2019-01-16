#include "point.hpp"

#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class triangle{
private:
    point p1,p2,p3;
public:
    triangle(const point& pin1,const point& pin2,const point& pin3);
    double perimeter() const;
    void translate(const point& pin);
    string tristring() const;
};

#endif




