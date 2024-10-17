#include<iostream>
#include "Complex.h"
using namespace std;


Complex :: Complex()
{
	cout<<"Default costructor "<<endl;
}


Complex :: Complex(int r , int i ): real(r) , img(i)
{
	cout<<"Parameterized constructor "<<endl;
}

void Complex :: Accept()
{
	cout<<"Enter the real number : ";
	cin>>real;
	cout<<"Enter the img number : ";
	cin>>img;
}

void Complex :: Display()
{
	cout<<"The complex number is " <<real<<" + "<<img<<"i"<<endl;
} 




