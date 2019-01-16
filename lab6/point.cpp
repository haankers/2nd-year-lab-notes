#include "point.hpp"

using namespace std;

point::point(double xin, double yin){
    x=xin;
    y=yin;
}
double point::getx() const{
    return x;
}
double point::gety() const{
    return y;
}
string point::ptstring() const{
    ostringstream tempss;
    string pointfmt;
    tempss << "(" << x << "," << y << ")";
    pointfmt = tempss.str();
    return pointfmt;
}
double point::distance() const{
    float distance = sqrt(pow(x,2) + pow(y, 2));
    return distance;
}
double point::distance(const point& pin1) const{
    float dist = sqrt(pow(x-pin1.getx(), 2) + pow(y-pin1.gety(), 2));
    return dist;
}
void point::set(double xin, double yin){
    x=xin;
    y=yin;
}
void point::translate(const point& pin1){
    x+=pin1.getx();
    y+=pin1.gety();
}

bool operator<(const point& p1, const point& p2){
    return p1.distance()<p2.distance();
}

bool operator==(const point& p1, const point& p2){
    return (p1.x==p2.x)&&(p1.y==p2.y);
}

ostream& operator<< ( ostream& out , const point& p1 ) {
    out << "(" << p1.x << "," << p1.y << ")";
    return out;
}
