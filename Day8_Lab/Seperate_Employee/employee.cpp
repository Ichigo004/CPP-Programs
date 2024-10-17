#include<iostream>
#include<string>
#include "employee.h"
using namespace std;

int Employee::total = 0;

Employee :: Employee()
{
	cout<<"Default constrctor "<<endl;
	total++;
}

Employee :: Employee(int id , string name , string dept , double sal): empid(id) ,ename(name) , dept(dept) , salary(sal)
{
		cout<<"Parameter constrctor "<<endl;
}

void Employee :: Accept()
{
	cout<<"Enter the id";
	cin>>ename;
	cout<<"Enter the Employee name :";
	cin>>ename;

	cout<<"Enter the Deparrtment :";
	cin>>dept;

	cout<<"Enter the salary :";
	cin>>salary;
}


void Employee :: Display()
{
	cout<<empid<<ename<<dept<<salary<<endl;
}	

int Employee ::gettotal()
{
	return total;
}

