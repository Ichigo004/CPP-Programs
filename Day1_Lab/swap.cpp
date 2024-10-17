#include<iostream>
using namespace std;

int main()
{
int a,b;
int temp;
cin>>a>>b;

temp = a;
a = b;
b = temp;

cout<<"Swapping of number is :"<<a<<b;
return 0;

} 

