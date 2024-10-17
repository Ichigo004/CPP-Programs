#include<iostream>
using namespace std;


int  fact(int n)

{
int result = 1;
for(int i = 1; i <=n;++i)
{ 
		result = result * i; 
}
return result; 
}


int main()
{
int n;
cin>>n;

for(int i =1; i<=n ; i++)
{
cout<<fact(i)<<" "; 

}

return 0;
}




























