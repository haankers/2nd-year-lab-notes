#include "intvector.hpp"
#include <iostream>

using namespace std;

intvector::intvector(int size){
    if(size == 0){
        iv_size = 0;
        iv_capacity = 1;
        iv = new int[iv_capacity];
    } else {
        iv_size = size;
        iv_size = iv_capacity;
        iv = new int[iv_capacity];
    }
}

intvector::intvector(const intvector& oiv){
    iv_size = oiv.getsize();
    iv_capacity = oiv.getcapacity();
    iv = new int[iv_capacity];
    for(int i=0; i < iv_size; i++){
        iv[i]=oiv.at(i);
    }
}

intvector::~intvector(){
    delete [] iv;
}

void intvector::pushback(int ival){
    if(iv_size<iv_capacity){
        iv[iv_size] = ival;
        iv_size++;
    } else {
        iv_capacity = 2*iv_capacity;
        
        int *temp = new int[iv_capacity];
        
        for(int i=0; i<iv_capacity; i++){
            if(i<=iv_size){
                temp[i] = iv[i];
            } else {
                temp[i] = 0;
            }
        }
        
        delete [] iv;
        iv = temp;
        
        iv[iv_size]=ival;
        iv_size++;
    }
}

int intvector::getsize() const{
    return iv_size;
}

int intvector::getcapacity() const{
    return iv_capacity;
}

int intvector::at(int i) const{
    return iv[i];
}

int& intvector::operator[](int i){
    return iv[i];
}
const int& intvector::operator[](int i) const{
    return iv[i];
}

intvector& intvector::operator=(const intvector& oiv){
    if(&oiv != this){
        delete [] iv;
        
        iv_capacity=oiv.iv_capacity;
        iv_size=oiv.iv_size;
        
        iv=new int[iv_capacity];
        
        for(int i=0; i<iv_capacity; i++){
            if(i<=iv_size){
                iv[i] = oiv[i];
            } else {
                iv[i] = 0;
            }
        }
    }
    return *this;
}
