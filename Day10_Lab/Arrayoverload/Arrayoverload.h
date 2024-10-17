#include <iostream>
using namespace std;

class Array
{
    int s; 
    int *p; 

public:
    
    Array(int size);

    Array(const Array& x);

    Array concate(const Array& arr) ;

    void Accept();

    void display();

    
    ~Array();
};

