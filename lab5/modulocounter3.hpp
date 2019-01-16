#ifndef modulocounter3_hpp
#define modulocounter3_hpp

#include <stdio.h>
#include "counter2.hpp"

class modulocounter3 : public counter2 {
private:
    int m;
public:
    modulocounter3(int mod);
    ~modulocounter3();
    bool increment();
};

#endif
