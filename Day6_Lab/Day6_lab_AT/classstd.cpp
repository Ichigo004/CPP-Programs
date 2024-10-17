#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
	int rno;
	string name;

	void Input()
	{
		cout << "Enter the NAme and Roll Number : ";
		cin >> name >> rno;
	}

	void Output()
	{
		cout << "Name : " << name << " " << "Roll No.: " << rno << endl;
	}

	static void sort1(Student s[], int size)
	{

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - 1 - i; j++)
			{
				if (s[j].rno > s[j + 1].rno)
				{
					swap(s[j], s[j + 1]);
				}
			}
		}
	}
};

int main()
{

	int n;
	cout << "Enter the element : ";
	cin >> n;

	Student s[n];

	for (int i = 0; i < n; i++)
	{

		s[i].Input();
	}

	Student::sort1(s, n);

	for (int i = 0; i < n; i++)
	{

		s[i].Output();
	}

	return 0;
}
