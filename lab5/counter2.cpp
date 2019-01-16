//
//  counter2.cpp
//  lab5
//
//  Created by Harrison Ankers on 23/11/2017.
//  Copyright © 2017 Harrison Ankers. All rights reserved.
//

#include "counter2.hpp"

counter2::counter2(int i){
    count = i;
}

counter2::~counter2(){}

void counter2::increment(){
    count++;
}

void counter2::reset(){
    count = 0;
}

int counter2::getcount(){
    return count;
}
