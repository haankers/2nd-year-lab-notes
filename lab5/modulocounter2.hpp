#ifndef modulocounter2_hpp
#define modulocounter2_hpp

#include <stdio.h>
#include "counter1.hpp"

class modulocounter2 : public counter1 {
private:
    int m;
public:
    modulocounter2(int mod);
    ~modulocounter2();
    bool increment();
};

#endif
