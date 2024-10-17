#include<iostream>
using namespace std;

int main()
{

int principle,rate,time,Simple_Interest;

cout<<"Enter Principle: ";
cin>>principle;
cout<<"Enter Rate : ";
cin>>rate;

cout<<"Enter Time: ";
cin>>time;

Simple_Interest = (principle*rate*time)/100;
cout<<"THe S.I is : "<<Simple_Interest<<endl;

return 0;

}
