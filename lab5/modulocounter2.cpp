#include "modulocounter2.hpp"

modulocounter2::modulocounter2(int mod): counter1(), m(mod){}

modulocounter2::~modulocounter2(){}

bool modulocounter2::increment(){
    counter1::increment();
    if((m>0)&&(getcount()>=m)){
        reset();
        return true;
    }
    return false;
}
