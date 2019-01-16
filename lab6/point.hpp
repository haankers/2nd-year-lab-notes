#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

class point{
private:
    double x, y;
public:
    point(double xin=0, double yin=0);
    
    double getx() const;
    double gety() const;
    
    string ptstring() const;
    
    double distance() const;
    
    double distance(const point& pin1) const;
    
    void set(double xin, double yin);
    
    void translate(const point& pin1);
    
    friend bool operator<(const point& p1, const point& p2);
    
    friend bool operator==(const point& p1, const point& p2);
    
    friend ostream& operator<<(ostream& out, const point& cPoint);
};

#endif



