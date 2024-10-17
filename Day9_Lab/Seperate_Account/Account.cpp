#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int Account::AccountNumber = 1000;

Account::Account() : accountno(AccountNumber++), balance(0.0)
{
    cout << "Default Constructor" << endl;
    cout << "The address of (this) pointer is : " << this << endl;
}

// parameterized constructor
Account::Account(string name, double bal) : HolderName(name), balance(bal), accountno(AccountNumber++)
{
    cout << "Parameterized Constructor" << endl;
}

void Account::Accept()
{
    cout << "Enter the Holder name : ";
    cin >> HolderName;
    cout << "Enter the balance : ";
    cin >> balance;
}

void Account::Display()
{
    cout << "Holder Name : " << HolderName << endl;
    cout << "Account Number : " << accountno << endl;
    cout << "Balance : " << balance << endl;
}

void Account::Deposit(double amount)
{
    balance += amount;
}

void Account::Withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Insufficient Balance " << endl;
    }
    else
    {
        balance -= amount;
        cout << "Amount Withdrawn successfully" << endl;
    }
}

int Account::getNextAccountNumber()
{
    return AccountNumber;
}

int Account::getAccountNumber()
{
    return accountno;
}

bool Account::matchesAccountNumber(int accnum)
{
    return accountno == accnum;
}
