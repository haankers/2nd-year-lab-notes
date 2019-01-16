#ifndef counter1_hpp
#define counter1_hpp

#include <stdio.h>

class counter1{
private:
    int count;
public:
    counter1(int i=0);
    ~counter1();
    
    void reset();
    void increment();
    
    int getcount();
};

#endif
