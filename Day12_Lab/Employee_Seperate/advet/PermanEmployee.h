
#include "Employee.h"
#include <iostream>

class PerEmployee : public Employee
{
	string name;
	int base_salary;
	int hra;
	int std_allowance;
	int other_allowance;
	int leave_travel;

public:
	PerEmployee();
	long int calSalary();
	void Accept();
	//	 void Display();
	string getType() const override { return "pe"; }
};
