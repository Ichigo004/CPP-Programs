#include<iostream>
using namespace std;


void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a,b;
	cout<<"Enter the first number :";
	cin>>a;


	cout<<"Enter the second number :";
	cin>>b;


	cout<< "number before swap :"<<a<<" "<<b<<endl;
	swap(a,b);		
	cout<< "number after swap :"<<a<<" "<<b<<endl;

	return 0;
}

























