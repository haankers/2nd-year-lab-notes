#ifndef modulocounter1_hpp
#define modulocounter1_hpp

#include <stdio.h>
#include "counter1.hpp"

class modulocounter1{
private:
    int m;
    counter1 c;
public:
    modulocounter1(int mod);
    ~modulocounter1();
    
    void reset();
    
    bool increment();
    
    int getcount();
};

#endif
