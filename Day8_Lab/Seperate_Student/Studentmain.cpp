#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main()

{
	Student s;
	s.Accept();
	s.Display();

	cout << "Total	: " << Student::gettotal();
	return 0;
}
