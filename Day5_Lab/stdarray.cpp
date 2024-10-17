#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
	int RollNo;
	string name;
};

void input(Student *s, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> s[i].RollNo >> s[i].name;
		int rno = s[i].RollNo;
		string n = s[i].name;
	}
}

void output(Student *s, int size)
{

	for (int i = 0; i < size; i++)
	{

		cout << "Rollno :" << s[i].RollNo << endl;
		cout << "Name : " << s[i].name << endl;
	}
}

int main()
{

	int n;
	cout << "Enter the Number of element :";
	cin >> n;

	Student s[n];

	input(s, n);

	output(s, n);

	return 0;
}
