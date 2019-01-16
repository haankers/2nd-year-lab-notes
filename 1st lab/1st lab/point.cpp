#include "point.hpp"

using namespace std;

point::point(double xin, double yin){
        x=xin;
        y=yin;
    }
double point::getx(){
        return x;
    }
    double point::gety(){
        return y;
    }
    string point::printpoint(){
        ostringstream tempss;
        string pointfmt;
        tempss << "(" << x << "," << y << ")";
        pointfmt = tempss.str();
        return pointfmt;
    }
    double point::distance(){
        float distance = sqrt(pow(x,2) + pow(y, 2));
        return distance;
    }
    double point::distance(point p1){
        float dist = sqrt(pow(x-p1.getx(), 2) + pow(y-p1.gety(), 2));
        return dist;
    }
    void point::set(double xin, double yin){
        x=xin;
        y=yin;
    }
    void point::translate(point p1){
        x+=p1.getx();
        y+=p1.gety();
    }



