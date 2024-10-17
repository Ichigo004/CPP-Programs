#include<iostream>
using namespace std;

template <class T>
T add(T &a , T &b)
{
	T c = a + b;
	return c;
}
template <class T>
T sub(T &a , T &b)
{
	T c = a - b;
	return c;
}
template <class T>
T multi(T &a , T &b)
{
	T c = a * b;
	return c;
}
template <class T>
T division(T &a , T &b)
{
	T c = a / b;
	return c;
}
template <class T>
void Swap(T &a , T &b)
{
	T c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 20;
	int b = 10;

	int c = add(a , b);
	cout<<"Addition of "<<a<<" and "<<b<<" is "<<c<<endl;
	
	int d = sub(a , b);
	cout<<"Substraction of "<<a<<" and "<<b<<" is "<<d<<endl;
	
	int e = multi(a , b);
	cout<<"Multiplication  of "<<a<<" and "<<b<<" is "<<e<<endl;
	
	int f = division(a , b);
	cout<<"Division of "<<a<<" and "<<b<<" is "<<f<<endl;
	
	cout<<"Swapping of "<<a<<" and "<<b<<" is "<<endl;
	Swap(a , b);
	cout<<"Swap is "<<a<<" and "<<b<<endl;

	return 0;
}
