#include "triangle.hpp"

#include <stdexcept>

using namespace std;

triangle::triangle(point p1in, point p2in, point p3in):
p1(p1in), p2(p2in), p3(p3in){
    double d1=distance(p1, p2);
    double d2=distance(p1, p3);
    double d3=distance(p2, p3);
    
    if((d1==0)||(d2==0)||(d3==0)){
        throw logic_error("two or more points are the same");
    }
    if((d1>=(d2+d3))||
       (d1>=(d2+d3))||
       (d1>=(d2+d3))){
        throw logic_error("one line is longer than the other two");
    }
}

double triangle::perimeter() const{
    double d1=distance(p1, p2);
    double d2=distance(p1, p3);
    double d3=distance(p2, p3);
    double perim;
    perim=d1+d2+d3;
    return perim;
}
