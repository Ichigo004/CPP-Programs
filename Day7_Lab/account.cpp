#include <iostream>
#include <string>
using namespace std;

class Account
{
    string AccountName;
    int AccountNumber;
    double balance;

public:
    Account()
    {
        cout << "Default Constructor" << endl;
        cout << "The Address of this pointer is : " << this << endl;
    }

    Account(string name, int number, double initialBalance) : AccountName(name), AccountNumber(number), balance(initialBalance)
    {
        cout << "Parameterized Constructor and address of this pointer is : " << this << endl;
    }

    void Accept()
    {
        cout << "Enter AccountName : ";
        cin >> AccountName;
        cout << "Enter AccountNumber : ";
        cin >> AccountNumber;
        cout << "Enter balance : ";
        cin >> balance;
    }

    void Display()
    {
        cout << "The account holder name is : " << AccountName << endl;
        cout << "Account number is  : " << AccountNumber << endl;
        cout << "The balance is : " << balance << endl;
    }

    void Deposit(double amount)
    {
        balance += amount;
        cout << "Deposit successfully " << endl;
    }

    void Withdrawl(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawl successfully : " << endl;
        }
        else
        {
            cout << "Insufficient balance : " << endl;
        }
    }
};

int main()
{
    Account *account[4];
    int num = 0;
    int choice;

    while (true)
    {
        cout << "Enter the choice " << endl;
        cout << "1. Add your account" << endl;
        cout << "2. Display your account" << endl;
        cout << "3. Deposit to account" << endl;
        cout << "4. Withdrawl from your account" << endl;
        cout << "5. Exit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            if (num < 4)
            {
                account[num] = new Account();
                account[num]->Accept();
                num++;
            }
            break;

        case 2:
            if (num > 0)
            {
                int accountIndex;
                cout << "Enter the account index (0-" << num - 1 << ") : ";
                cin >> accountIndex;
                if (accountIndex >= 0 && accountIndex < num)
                {
                    account[accountIndex]->Display();
                }
                else
                {
                    cout << "Invalid account index" << endl;
                }
            }
            else
            {
                cout << "No accounts created yet" << endl;
            }
            break;

        case 3:
            if (num > 0)
            {
                int accountIndex;
                cout << "Enter the account index (0-" << num - 1 << ") : ";
                cin >> accountIndex;
                if (accountIndex >= 0 && accountIndex < num)
                {
                    double amount;
                    cout << "Enter the amount to deposit : ";
                    cin >> amount;
                    account[accountIndex]->Deposit(amount);
                }
                else
                {
                    cout << "Invalid account index" << endl;
                }
            }
            else
            {
                cout << "No accounts created yet" << endl;
            }
            break;

        case 4:
            if (num > 0)
            {
                int accountIndex;
                cout << "Enter the account index (0-" << num - 1 << ") : ";
                cin >> accountIndex;
                if (accountIndex >= 0 && accountIndex < num)
                {
                    double amount;
                    cout << "Enter the amount to withdraw : ";
                    cin >> amount;
                    account[accountIndex]->Withdrawl(amount);
                }
                else
                {
                    cout << "Invalid account index" << endl;
                }
            }
            else
            {
                cout << "No accounts created yet" << endl;
            }
            break;

        case 5:
            cout << "Exiting..." << endl;
            for (int i = 0; i < num; i++)
            {
                delete account[i];
            }
            delete[] account;
            return 0;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}
