#include<iostream>
#include<cstring>
using namespace std;

struct Student{

int rno;
string name;

};


void print(Student s[])
{

for(int i = 0; i< 5 ; i++)
{

cout<<"NAme : "<<s[i].name <<"Roll numbwe : "<<s[i].rno<<endl;

}

}


int main()
{

Student s[2];
int roll;
string n;

for(int i = 0; i< 5 ;i++)
{
cin>>n>>roll;

s[i].name = n;
s[i].rno = roll;

}

print(s);

return 0;

}				 





















