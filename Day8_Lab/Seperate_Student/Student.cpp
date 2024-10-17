#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int Student::Total = 0;

Student ::Student()
{
	cout << "Default constrctor " << endl;
	rollno++;
}

Student ::Student(int m, string n) : marks(m), name(n)
{
	cout << "Parameter constrctor " << endl;
}

void Student ::Accept()
{
	cout << "Enter the name";
	cin >> name;
	cout << "Enter the marks";
	cin >> marks;
}

void Student ::Display()
{
	cout << marks << name << endl;
}

int Student::gettotal()
{
	return Total;
}
