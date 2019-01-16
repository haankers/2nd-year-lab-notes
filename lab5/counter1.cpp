#include "counter1.hpp"

counter1::counter1(int i){
    count = i;
}

counter1::~counter1(){}

void counter1::increment(){
    count++;
}

void counter1::reset(){
    count = 0;
}

int counter1::getcount(){
    return count;
}
