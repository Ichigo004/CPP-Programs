#include <iostream>
#include "Accounts.h"
#include <string>
using namespace std;

Accounts::Accounts() : name(""), balance(0.0), bankName("XYZ BANK")
{

    cout << "Non Paramterized Constructor" << endl;
    accNumberCount = accNumberCount + 1;
    accNumber = accNumberCount;
}
Accounts::Accounts(string name, double balance) : name(name), balance(balance), bankName("XYZ BANK")
{
    accNumberCount = accNumberCount + 1;
    accNumber = accNumberCount;
    cout << "Parameterized Constructor" << endl;
}
void Accounts::deposit(double amount)
{
    if (amount < 0)
    {
        cout << "Invalid Amount type";
    }
    else
    {
        this->balance += amount;
        cout << "Deposit Successfull Your Balance is :" << balance << endl;
    }
}
void Accounts::withdraw(double amount)
{
    if (amount < 0)
    {
        cout << "Invalid amount type";
    }
    else if (amount > balance)
    {
        cout << "Your balance is : " << balance << " You cannot withdraw more than that" << endl;
    }
    else
    {
        this->balance -= amount;
        cout << "Withdraw Successfull Your Balance is :" << balance << endl;
    }
}
int Accounts::getAccNumber()
{
    return accNumber;
}

int Accounts ::accNumberCount = 126000123;

ostream &operator<<(ostream &os, const Accounts &a)
{

    os << "BankName : " << a.bankName << endl;
    os << "Account Number: " << a.accNumber << endl;
    os << "Account Holder: " << a.name << endl;
    os << "Balance: " << a.balance << endl;
    return os;
}

istream &operator>>(istream &is, Accounts &a)
{
    cout << "Enter Your Name" << endl;
    is >> a.name;
    cout << "Enter balance " << endl;
    is >> a.balance;
    return is;
}
