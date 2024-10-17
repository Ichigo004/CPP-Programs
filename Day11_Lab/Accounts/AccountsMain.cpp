#include <iostream>
#include "Accounts.h"
#include <string>
using namespace std;

int main()
{
    int totalAccounts;
    cout << "Enter number of accounts you want to add" << endl;
    cin >> totalAccounts;
    Accounts openAccounts[totalAccounts];
    int accCount = 0;
    char choice;

    do
    {
        cout << "\n      XYZ BANK    \n";
        cout << "A. Open a new account\n";
        cout << "B. Display all accounts\n";
        cout << "C. Deposit money\n";
        cout << "D. Withdraw money\n";
        cout << "E. Delete Account\n";
        cout << "F. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 'A':
            if (accCount < totalAccounts)
            {

                cin >> openAccounts[accCount];
                cout << "Account successfully created!\n";
                cout << openAccounts[accCount];
                accCount++;
            }
            break;
        case 'B':
            for (int i = 0; i < accCount; i++)
            {
                cout << openAccounts[i];
                cout << "Address of pointers " << openAccounts[i] << endl;
            }
            break;
        case 'C':
        {
            int accN;
            double amount;
            bool f = false;
            cout << "Enter account number to deposit money" << endl;
            cin >> accN;

            for (int i = 0; i < accCount; i++)
            {
                if (openAccounts[i].getAccNumber() == accN)
                {
                    cout << "Enter amount to deposit" << endl;
                    cin >> amount;
                    openAccounts[i].deposit(amount);
                    f = true;
                    break;
                }
            }
            if (!f)
            {
                cout << "Account Number not found!!" << endl;
            }
            break;
        }

        case 'D':
        {
            int accN;
            double amount;
            bool f = false;
            cout << "Enter account number to withdraw money" << endl;
            cin >> accN;

            for (int i = 0; i < accCount; i++)
            {
                if (openAccounts[i].getAccNumber() == accN)
                {
                    cout << "Enter amount to withdraw!!" << endl;
                    cin >> amount;
                    openAccounts[i].withdraw(amount);
                    f = true;
                    break;
                }
            }

            if (!f)
            {
                cout << "Account Number not found" << endl;
            }
            break;
        }

        case 'E':
        {
            int accN;
            bool f = false;
            cout << "Enter account number to delete your account" << endl;
            cin >> accN;
            for (int i = 0; i < accCount; i++)
            {
                if (openAccounts[i].getAccNumber() == accN)
                {
                    for (int j = i; j < accCount - 1; j++)
                    {
                        i = j;
                    }

                    accCount--;
                    f = true;
                    break;
                }
            }
            if (!f)
            {
                cout << "Account Number not found!!" << endl;
            }
        }
        break;
        case 'F':
            cout << "Exiting program";
            break;
        default:
            cout << "Enter values between A-E" << endl;
        }

    } while (choice != 'F');
    // //free dynamically allocated memory

    // for (int i = 0; i < accCount; i++) {
    //     delete openAccounts[i];
    // }
    return 0;
}
