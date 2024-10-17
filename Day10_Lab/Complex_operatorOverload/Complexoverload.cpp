	#include <iostream>
#include "Complexoverload.h"
using namespace std;

/*Complex::Complex(int r , int i):real(r) , img(i)
	{
	cout<<"parameter ctor "<<endl ;
	}
*/

Complex::Complex()
{
	cout << "Default " << endl;
}

Complex Complex::operator+(const Complex &s)
{
	Complex c2;
	c2.real = this->real + s.real;
	c2.img = this->img + s.img;

	return c2;
}

Complex Complex::operator-(const Complex &s)
{
	Complex c2;
	c2.real = this->real - s.real;
	c2.img = this->img - s.img;

	return c2;
}
Complex Complex::operator*(const Complex &s)
{
	Complex c2;
	c2.real = this->real * s.real;
	c2.img = this->img * s.img;

	return c2;
}
void Complex::Display()
{
	cout << "real : " << real;
	cout << "img : " << img;
}

void Complex::Accept()
{
	cout << "Enter the 1st number :";
	cin >> real;
	cout << "Enter the img number :";
	cin >> img;
}
