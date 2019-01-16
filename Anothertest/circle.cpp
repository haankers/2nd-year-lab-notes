#include "circle.hpp"

#include <stdexcept>

using namespace std;

circle::circle(point pin, double radin):
p(pin), radius(radin){
    if(radius<=0){
        throw logic_error("error is wrong");
    }
}

double circle::perimeter() const{
    double circum;
    circum = radius*2*3.14;
    return circum;
}
