#include "PermanEmployee.h"
#include "ContractEmployee.h"

int main()
{
	Employee *ep = NULL;

	PerEmployee pe;
	ContrEmployee ce;

	string category;
	cout << "Enter the Category (pe for Permanent Employee, ce for Contract Employee): ";
	cin >> category;
try
{
	
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

	if (category == "pe")
	{
		ep = &pe;
		ep->Accept();
		ep->calSalary();
		ep->Display();
	}
	else if (category == "ce")
	{
		ep = &ce;
		ep->Accept();
		ep->calSalary();
		ep->Display();
	}
	else
	{
		cout << "Invalid category" << endl;
		return 1;
	}

	return 0;
}
