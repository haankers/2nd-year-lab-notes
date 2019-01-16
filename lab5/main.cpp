#include "intvector.hpp"
#include "Stopwatch.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    {
        stopwatch sw;
        for(int i=0;i<36000;i++){
            sw.tick();
            cout<<sw<<endl;
        }
    }
    return 0;
}

