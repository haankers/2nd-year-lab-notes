#include "Stopwatch.hpp"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

stopwatch::stopwatch(): seconds(60), minutes(60), hours(0){}

stopwatch::~stopwatch(){}

void stopwatch::reset(){
    seconds.reset();
    minutes.reset();
    hours.reset();
}

void stopwatch::tick(){
    if (seconds.increment()) {
        if (minutes.increment()) {
            hours.increment();
        }
    }
}

int stopwatch::getseconds(){
    return seconds.getcount();
}

int stopwatch::getminutes(){
    return minutes.getcount();
}

int stopwatch::gethours(){
    return hours.getcount();
}

ostream& operator<<(ostream& out, stopwatch sw){
    out <<"("<< sw.hours.getcount() << ":" << sw.minutes.getcount() << ":" << sw.seconds.getcount()<<")";
    return out;
}

