#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int s) : size(s)
{
	p = new int[s];
	cout << "Parameterized Constructoe" << endl;
}

void Array::Accept()
{
	cout << "Enter the passing element : " << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Array::Display()
{

	for (int i = 0; i < size; i++)
	{
		cout << p[i] << endl;
		;
	}
}

Array::~Array()
{
	cout << "dynamic p ki costly property ke l lag gye" << endl;
	delete[] p;
}
