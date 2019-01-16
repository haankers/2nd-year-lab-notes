#include "modulocounter1.hpp"

modulocounter1::modulocounter1(int mod){
    m=mod;
    c = counter1();
}

modulocounter1::~modulocounter1(){}

void modulocounter1::reset(){
    c.reset();
}

bool modulocounter1::increment(){
    c.increment();
    if((m>0)&&(c.getcount()>=m)){
        c.reset();
        return true;
    }
    return false;
}

int modulocounter1::getcount(){
    return c.getcount();
}
