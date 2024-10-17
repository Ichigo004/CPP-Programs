#include "ContractEmployee.h"

ContrEmployee::ContrEmployee()
{
	cout << "contract  employee ctor" << endl;
}

long int ContrEmployee::calSalary()
{
	Employee::total_salary = wages * no_of_days;
	return total_salary;
}

void ContrEmployee::Accept()
{
	cout << "enter the wages : ";
	cin >> wages;

	cout << "enter the number of days : ";
	cin >> no_of_days;
}
