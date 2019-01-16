#include "modulocounter3.hpp"

modulocounter3::modulocounter3(int mod): counter2(), m(mod){}

modulocounter3::~modulocounter3(){}

bool modulocounter3::increment(){
    counter2::increment();
    if((m>0)&&(count>=m)){
        reset();
        return true;
    }
    return false;
}
