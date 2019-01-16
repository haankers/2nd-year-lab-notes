#ifndef Stopwatch_hpp
#define Stopwatch_hpp

#include "modulocounter1.hpp"
#include "counter1.hpp"

#include <ostream>
#include <stdio.h>

using namespace std;

class stopwatch{
private:
    modulocounter1 seconds;
    modulocounter1 minutes;
    counter1 hours;
public:
    stopwatch();
    ~stopwatch();
    
    void reset();
    void tick();
    
    int getseconds();
    int getminutes();
    int gethours();
    
    friend ostream& operator<<(ostream& out, stopwatch sw);
};
#endif
