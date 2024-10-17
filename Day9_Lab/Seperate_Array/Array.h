#include <iostream>
using namespace std;

class Array
{
	int size;
	int *p;

public:
	Array(int);

	void Accept();
	void Display();

	~Array();
};
