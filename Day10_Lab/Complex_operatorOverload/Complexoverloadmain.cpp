#include<iostream>
#include "Complexoverload.h"

int main()
{
	Complex c1();
	c1.Accept();
	Complex c3();
	c3.Accept();
	Complex c4;
	c4 = c1+c3;
	c4.Display();

	c4 = c3 - c1;
	c4.Display();
	c4 = c1*c3;
	c4.Display();
//	cout<<"addition is : "<<c4.real<<c4.img<<endl;
	return 0;
}
