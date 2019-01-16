#ifndef pointhpp
#define pointhpp

class point{
public:
    point(double xin, double yin);
private:
    double x;
    double y;
    
friend double getdist(const point& p1, const point& pq);
};

#endif
