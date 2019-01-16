#ifndef counter2_hpp
#define counter2_hpp

#include <stdio.h>

class counter2{
protected:
    int count;
public:
    counter2(int i=0);
    ~counter2();
    
    void reset();
    void increment();
    
    int getcount();
};

#endif
