#include "circle.hpp"

#include <iostream>
#include <stdexcept>

using namespace std;

circle::circle(point p1in, double radin):
p1(p1in), radius(radin){
    if(radius<= 0){
        throw logic_error("invalid raidus");
    }
}

double circle::perimeter() const{
    double peri;
    peri = 3.14* radius;
    return peri;
}
