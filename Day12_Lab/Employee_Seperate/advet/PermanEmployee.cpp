#include "PermanEmployee.h"

PerEmployee::PerEmployee()
{
	cout << "permanent employee ctor" << endl;
}

long int PerEmployee::calSalary()
{
	Employee::total_salary = base_salary + hra + std_allowance + other_allowance + leave_travel;
	return total_salary;
}

void PerEmployee::Accept()
{
	cout << "Enter the name ";
	cin >> name;

	cout << "enter the base salary : ";
	cin >> base_salary;

	cout << "enter the hra : ";
	cin >> hra;

	cout << "enter the std_allowance : ";
	cin >> std_allowance;

	cout << "enter the other_allowance : ";
	cin >> other_allowance;

	cout << "enter the leave_travel: ";
	cin >> leave_travel;
}

/*void PerEmployee::Display()
{
		cout<<"Total salary is : "<<total_salary<<endl;;
}
*/
