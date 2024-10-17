
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int empid;
	string ename;
	string dept;
	double salary;
	static int total;
	
	public:
	
	Employee();
	
	Employee(int id , string name , string dept , double sal);
	
	void Accept();
	void Display();
	static int gettotal();	

};


