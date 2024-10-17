#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
	int size = 0;
	cout << "Enter number of students you want to add" << endl;
	cin >> size;
	Student s[size];
	for (int i = 0; i < size; i++)
	{
		cin >> s[i];
		cout << s[i];
	}
}