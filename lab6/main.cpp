#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DrawLine ( double x1 , double x2 , double y1 , double y2, ofstream &ofile) ;

int main(){
    ofstream ofile;
    ofile.open("file.svg");
    
    double width = 100, height = 100;
    ofile << "<svg width=\"" << width << "\" height=\"" << height << "\" xmlns=\"http://www.w3.org/2000/svg\">" << endl ;
    ofile << "<style type=\"text/css\">line{stroke:black;stroke-width:1;stroke-opacity:0.5;stroke-linecap:round;}</style>" << endl;
    
    DrawLine(10, 50, 10, 50, ofile);
    DrawLine(25, 100, 50, 50, ofile);
    ofile << "</svg>" << endl;
    ofile.close();
}

void DrawLine ( double x1 , double x2 , double y1 , double y2, ofstream &ofile) {
    ofile << "<line x1=\"" << x1 << "\" x2=\"" << x2 << "\" y1=\"" << y1 <<"\" y2=\"" << y2 << "\"/>" << endl;
}
