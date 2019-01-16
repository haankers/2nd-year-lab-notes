#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cmath>
#include <vector>
#include <list>

#include "point.hpp"
#include "triangle.hpp"
#include "circle.hpp"
#include "shape.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    list<triangle> tlist;
    list<circle> clist;
    
    ifstream trifile;
    trifile.open(argv[1]);
    if(trifile.is_open()){
        double i1, i2, i3, i4, i5, i6;
        
        try{
            while(trifile >> i1 >> i2 >> i3 >> i4 >> i5 >> i6){
                triangle tri(point(i1, i2), point(i3, i4), point(i5, i6));
                tlist.push_back(tri);
            }
        } catch(logic_error& e) { cout<< e.what() << endl; }
    } else { cout << "file not open" << endl; }
    trifile.close();
    
    ifstream cirfile;
    cirfile.open(argv[2]);
    if(cirfile.is_open()){
        double i1, i2, i3;
        
        try{
            while(cirfile >> i1 >> i2 >> i3){
                circle cir(point(i1, i2), i3);
                clist.push_back(cir);
            }
        } catch(logic_error& e) { cout << e.what() << endl; }
    } else { cout << "file not open" << endl; }
    cirfile.close();
    
    vector<shape*> svec;
    shape* sptr;
    
    for(list<triangle>::iterator it = tlist.begin(); it != tlist.end(); ++it){
        sptr=&*it;
        svec.push_back(sptr);
    }
    
    for(list<circle>::iterator ic = clist.begin(); ic != clist.end(); ++ic){
        sptr=&*ic;
        svec.push_back(sptr);
    }
    
    for(int i=0; i<svec.size(); i++){
        cout << (svec[i]->perimeter()) << endl;
    }
    
    return 0;
}
