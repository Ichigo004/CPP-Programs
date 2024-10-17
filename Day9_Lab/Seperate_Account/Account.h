#include <iostream>
#include <string>
using namespace std;

class Account
{

	static int AccountNumber;
	string HolderName;
	double balance;
	int accountno;

public:
	Account();
	Account(string name, double bal);

	void Accept();
	void Display();

	void Deposit(double amount);

	void Withdraw(double amount);

	static int getNextAccountNumber();
	int getAccountNumber();
	bool matchesAccountNumber(int accnum);
};
