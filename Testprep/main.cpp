#include <iostream>
#include <list>
#include <fstream>
#include <vector>

#include "point.hpp"
#include "triangle.hpp"
#include "circle.hpp"

using namespace std;

int main (int argc, char *argv[]){
    point p1(1,2);
    point p2(4,2);
    circle circ(p1, 4);
    
    list<triangle> trilist;
    list<circle> circlist;
    
    ifstream trifile;
    trifile.open(argv[1]);
    
    if(trifile.is_open()){
        double i1, i2, i3, i4, i5, i6;
        try{
            while(trifile >> i1 >> i2 >> i3 >> i4 >> i5 >> i6){
                triangle tri(point(i1,i2), point(i3,i4), point(i5,i6));
                trilist.push_back(tri);
            }
        }catch (logic_error& e){
            cout<< e.what()<<endl;
        }
        trifile.close();
    } else { cout<<"not open"<<endl; }
    
    ifstream circfile;
    circfile.open(argv[2]);
    
    if(circfile.is_open()){
        double i1, i2, i3;
        try{
            while(circfile >> i1 >> i2 >> i3){
                circle circ(point(i1,i2), i3);
                circlist.push_back(circ);
            }
        }catch (logic_error& e){
            cout<< e.what()<<endl;
        }
        circfile.close();
    } else { cout<<"not open"<<endl; }
    
    
    
    vector<shape*>shapelist;
    shape* shapept;
    
    for(list<triangle>::iterator it = trilist.begin(); it!= trilist.end(); it++){
        shapept=&*it;
        shapelist.push_back(shapept);
    }
    for(list<circle>::iterator ic = circlist.begin(); ic!= circlist.end(); ic++){
        shapept=&*ic;
        shapelist.push_back(shapept);
    }
    for(int i=0; i<shapelist.size(); i++){
        cout<<(shapelist[i]->perimeter())<<endl;
    }
    
    
    
    return 0;
}
