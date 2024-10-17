#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

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
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "***************************" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            if (num < 5)
            {
                acc[num].Accept();
                cout << "Account number is : " << acc[num].getAccountNumber() << endl;
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
                if (acc[i].matchesAccountNumber(accnum))
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
                if (acc[i].matchesAccountNumber(accnum))
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
        {
            int accnum;
            cout << "Enter the account number to display details: ";
            cin >> accnum;
            bool found = false;

            for (int i = 0; i < num; i++)
            {
                if (acc[i].matchesAccountNumber(accnum))
                {
                    acc[i].Display();
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

        case 5:
            return 0;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
