#include <iostream>
#include <string>
using namespace std;
class Student
{
	int rollno;
	string name;
	int marks;
	static int Total;

public:
	Student();

	Student(int m, string n);

	void Accept();
	void Display();
	static int gettotal();
};
