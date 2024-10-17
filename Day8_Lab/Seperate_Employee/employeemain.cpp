#include<iostream>
#include<string>
#include "employee.h"
using namespace std;

int main()

{
	Employee e1 , e2;
	e1.Accept();
	e1.Display();

	e2.Accept();
	e2.Display();


	cout<<"Total Register Employee : "<<Employee::gettotal();
	return 0;

}






















