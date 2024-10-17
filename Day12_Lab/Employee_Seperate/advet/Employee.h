#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;

protected:
	int total_salary;

public:
	string type;
	Employee() : type("") {}
	virtual long int calSalary() = 0;
	virtual void Accept();
	virtual void Display();
	virtual string getType() const
	{
		return type;
	}
};
#endif
