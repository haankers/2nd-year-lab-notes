#ifndef intvector_hpp
#define intvector_hpp

#include <stdio.h>

class intvector{
private:
    int *iv;
    int iv_size;
    int iv_capacity;
public:
    intvector(int size = 0);
    
    intvector(const intvector& oiv);
    
    ~intvector();
    
    void pushback(int i);
    
    int getsize() const;
    int getcapacity() const;
    
    int at(int i) const;
    
    int& operator[](int i);
    const int& operator[](int i) const;
    
    intvector& operator=(const intvector& oiv);
};

#endif
