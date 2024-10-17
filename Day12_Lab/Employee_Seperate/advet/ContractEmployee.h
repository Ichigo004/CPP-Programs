
#include "Employee.h"
#include <iostream>

class ContrEmployee : public Employee
{
	int wages;
	int no_of_days;

public:
	ContrEmployee();
	long int calSalary();
	void Accept();
	// void Display();
	string getType() const override { return "ce"; }
};
