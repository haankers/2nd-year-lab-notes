#include "triangle.hpp"

using namespace std;

triangle::triangle(const point& pin1,const point& pin2,const point& pin3){
    p1=pin1;
    p2=pin2;
    p3=pin3;
}

double triangle::perimeter() const{
    double perim;
    perim = p1.distance(p2)+
    p2.distance(p3)+
    p3.distance(p1);
    return perim;
}

void triangle::translate(const point& pin){
    p1.translate(pin);
    p2.translate(pin);
    p3.translate(pin);
}

string triangle::tristring() const{
    ostringstream tempss;
    string trifmt;
    tempss << "The triangle has points : " <<
    p1.ptstring()<<","<<
    p2.ptstring()<<","<<
    p3.ptstring()<<",";
    trifmt = tempss.str();
    return trifmt;
}
