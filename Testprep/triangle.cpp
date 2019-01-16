#include "triangle.hpp"

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

triangle::triangle(point p1in, point p2in, point p3in):
p1(p1in), p2(p2in), p3(p3in){
    double d1, d2, d3;
    d1= getdist(p1, p2);
    d2= getdist(p2, p3);
    d3= getdist(p3, p1);
    
    if((d1==0)||(d2==0)||(d3==0)){
        throw logic_error("a point or more has been entered twice");
    }
    if((d1>=(d2+d3))||
       (d2>=(d1+d3))||
       (d3>=(d2+d1)))
    {
        throw logic_error("one side is longer than the sum of the other two sides");
    }
}

double triangle::perimeter() const{
    double peri=0;
    peri+= getdist(p1, p2);
    peri+= getdist(p2, p3);
    peri+= getdist(p3, p1);
    return peri;
}


