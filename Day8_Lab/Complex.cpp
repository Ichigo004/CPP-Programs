	#include <iostream>
using namespace std;

class Complex
{

	int real;
	int img;
	static int count;

public:
	Complex() : real(0), img(0)
	{
		cout << "Default Constructor " << endl;
		count++;
	}

	Complex(int r, int i) : real(r), img(i)
	{
		cout << "PArameterized constructor " << endl;
		count++;
	}

	static int getcount()
	{
		return count;
	}
};

int Complex ::count = 0;
int main()
{
	Complex c1;
	cout << "object 1 : " << Complex::getcount() << endl;

	Complex c2;
	cout << "object 2 : " << Complex::getcount() << endl;

	Complex c3;
	cout << "object 3 : " << Complex::getcount() << endl;

	return 0;
}
