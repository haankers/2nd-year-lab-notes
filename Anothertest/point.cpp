#include "point.hpp"
#include <cmath>

point::point(double xin, double yin): x(xin), y(yin){}

double distance(const point& p1, const point& p2){
    double temp;
    temp = pow(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2), 0.5);
    return temp;
}
