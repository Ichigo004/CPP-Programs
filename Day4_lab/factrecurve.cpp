#include<iostream>
using namespace std;


int fact(int n)
{

while(n>1)
{

return n * fact( n-1);

}
return 1;

}

int main()

{

int n;
cout<<"Enter the number ";
cin>>n;

for(int i = 1; i<=n; i++)
{
cout<<"THe fact is :" <<fact(i)<<endl;
}

return 0;

}



























