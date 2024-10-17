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
    // default constructor
    Account() : accountno(AccountNumber++), balance(0.0)
    {
        cout << "Default Constructor" << endl;
        cout << "The address of (this) pointer is : " << this << endl; 
    }

    // parameterized constructor
    Account(string name, double bal) : HolderName(name), balance(bal), accountno(AccountNumber++)
    {
        cout << "Parameterized Constructor" << endl;
    }

    void Accept()
    {
        cout << "Enter the Holder name : ";
        cin >> HolderName;
        cout << "Enter the balance : ";
        cin >> balance;
    }

    void Display()
    {
        cout << "Holder Name : " << HolderName << endl;
        cout << "Account Number : " << accountno << endl;
        cout << "Balance : " << balance << endl;
    }

    void Deposit(double amount)
    {
        balance += amount;
    }

    void Withdraw(double amount)
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

    static int getNextAccountNumber()
    {
        return AccountNumber;
    }

    int getAccountNumber() const
    {
        return accountno;
    }
};

int Account::AccountNumber = 1000;

int main()
{
    Account acc[5];
    int choice;
    int num = 0;

    while (true)
    {
        cout << "***************************" << endl;
        cout << "Menu Driven" << endl;
        cout << "1. Open Account" << endl;
        cout << "2. Deposit the Amount" << endl;
        cout << "3. Withdraw the Amount" << endl;
        cout << "4. Display the Details" << endl;
        cout << "5. Exit" << endl;
        cout << "***************************" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            if (num < 5)
            {
                acc[num].Accept();
                num++;
            }
            else
            {
                cout << "Account limit reached" << endl;
            }
            break;

        case 2:
        {
            int accnum;
            double amount;
            cout << "Enter your account number: ";
            cin >> accnum;
            bool found = false;

            for (int i = 0; i < num; i++)
            {
                if (acc[i].getAccountNumber() == accnum)
                {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    acc[i].Deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }

        case 3:
        {
            int accnum;
            double amount;
            cout << "Enter your account number: ";
            cin >> accnum;
            bool found = false;

            for (int i = 0; i < num; i++)
            {
                if (acc[i].getAccountNumber() == accnum)
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    acc[i].Withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
            }
            break;
        }

        case 4:
            for (int i = 0; i < num; i++)
            {
                acc[i].Display();
            }
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}

