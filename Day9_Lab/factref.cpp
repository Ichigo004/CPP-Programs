#include <iostream>
using namespace std;

int fact(const int &n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
		//	cout<<fact<<endl;
	}

	//	cout<<n*2;
	return fact;
}

int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;

	int facti = fact(n);
	cout << "The factorial of " << n << " number is " << facti << endl;

	return 0;
}
