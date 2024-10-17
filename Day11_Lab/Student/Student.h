#include "Address.h"
using namespace std;
#include <iostream>
class Student
{
	int rno;
	string name;
	const string schoolName;
	Address address;

public:
	Student();
	Student(int, string, Address);

	friend ostream &operator<<(ostream &os, const Student &s);
	friend istream &operator>>(istream &is, Student &s);
};
