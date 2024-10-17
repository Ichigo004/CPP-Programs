#include<iostream>
using namespace std;

int swap(int &a, int &b)
{

int temp;

temp = a  ;
a = b;
b= temp;

return 0;
}

int main()
{

int a ,b ;

cout<<"Enter the value of a :";
cin>>a;

cout<<"ENter the value of b : ";
cin>>b;


swap(a , b);

cout<<"The Swapping a is : "<<a<<endl;



cout<<"The Swapping b is : "<<b<<endl;

return 0;
} 





































