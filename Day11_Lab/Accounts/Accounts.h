using namespace std;
#include <string>
#include <iostream>
class Accounts
{
private:
	string name;
	static int accNumberCount;
	double balance;
	int accNumber;
	const string bankName;

public:
	Accounts();
	Accounts(string, double);

	void deposit(double);
	void withdraw(double);

	int getAccNumber();

	friend ostream &operator<<(ostream &os, const Accounts &a);
	friend istream &operator>>(istream &is, Accounts &a);
};