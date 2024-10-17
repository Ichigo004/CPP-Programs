
#include<iostream>


using namespace std;

int main()
{
int num,remainder;
int sum = 0;
cin>>num;

while(num> 0)
{
remainder = num%10;
sum = sum + remainder;
num = num/10;
}
cout<<"Additon of four digit number is :" << sum<<endl;

return 0;
}
