#include <iostream>
#include <iostream>
using namespace std;

class Account
{
    static int AccountNumber;
    string HolderName;
    double balance;
    int accountno;

public:
    // default constructor
    Account() : accountno(AccountNumber++)
    {
        cout << "Default Constructor" << endl;
        cout << "The address if (this) pointer is : " << this << endl;
    }

    // parameterized constructor

    Account(int accnumber, string name, double bal) : HolderName(name), balance(bal)
    {
        cout << "parameterized constructor" << endl;
    }

    void Accept()
    {
        cout << "Enter the Holder name : ";
        cin >> HolderName;
        cout << "Enter the balance : ";
        cin >> balance;
        // cout << "Enter the Account number : ";
        // cin >> AccountNumber;
    }

    void Display()
    {
        cout << "Holder Name : " << HolderName << endl;
        cout << "account number : " << AccountNumber << endl;
        cout << "balance : " << balance << endl;
    }

    void Deposit(double amount)
    {
        balance += amount;
    }

    void Withdrawl(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance " << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawl successfully" << endl;
        }
    }

    static int getAccNumber()
    {
        return AccountNumber;
    }

    bool findAccountnumber(int accnum)
    {
        return AccountNumber == accnum;
    }
};

int Account ::AccountNumber = 1000;

int main()
{

    Account acc[5];

    int choice;
    int num = 0;

    while (true)
    {
        cout << "***************************" << endl;
        cout << "Menu Driven" << endl;
        cout << "1.Open Account" << endl;
        cout << "2.Deposit the Amount" << endl;
        cout << "3.Withdrawl the amount" << endl;
        cout << "4.Display the Details" << endl;
        cout << "5.exit" << endl;
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
                cout << "Invalid error" << endl;
            }

            break;

        case 2:
        {

            int accnum;
            float amount;

            cout << "Enter your account number" << endl;
            cin >> accnum;
            bool found = false;

            for (int i = 0; i < num; i++)
            {

                acc[i].Deposit(amount);

        /* if (acc[i].findAccountnumber(accnum))
                {
                    cout << "Enter amount to deposit";
                    cin >> amount;
                    acc[i].Deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
       */     }
        break;
        }

        case 3:
        {
            int accnum;
            float amount;

            cout << "Enter your account number" << endl;
            cin >> accnum;
            bool found = false;

            for (int i = 0; i < num; i++)
            {

                acc[i].Withdrawl(amount);

        /*     if (acc[i].findAccountnumber(accnum))
                {
                    cout << "Enter amount to withdrawl";
                    cin >> amount;
                    acc[i].Withdrawl(amount);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
/*            }
            break;
        }

        case 4:
        {
            int accnum;
            float amount;

           // cout << "Enter your account number" << endl;
           // cin >> accnum;
            bool found = false;
           

		 for (int i = 0; i < num; i++)
            {
         acc[i].Display();	 

/*      if (acc[i].findAccountnumber(accnum))
                {
                    acc[i].Display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Account not found" << endl;
      */      }
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
