#include<iostream>
using namespace std;

int main()
{

char alph;
cout<<"Enter the Alphabet : ";
cin>>alph;

if(alph>='A'&& alph<='Z')
{
cout<<"ALphabet is capital";
}

else if(alph>='a' && alph<='z')
{
cout<<"Alphabet is small"<<endl;
}

else
{
cout<<"Invalid input"<<endl;
}
return 0;
}






