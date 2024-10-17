#include <iostream>
using namespace std;

class Complex
{
	int real;
	int img;

public:
	Complex();
	Complex(int, int);

	Complex operator+(const Complex &);
	Complex operator-(const Complex &);
	Complex operator*(const Complex &);

	void Display();
	void Accept();
};
