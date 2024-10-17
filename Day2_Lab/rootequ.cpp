
#include<iostream>
#include<math.h>
using namespace std;

int main()
{

float a,b,c,r1,r2,real,img;

float  disc = (b*b)-(4*a*c);
cout<<"Enter the numbers :";
cin>>a>>b>>c;

if(disc>0)
{

r1 = (-b + sqrt(disc))/(2*a);

r2 = (-b - sqrt(disc))/(2*a);
cout<<"Real and different "<<endl;
cout<<r1<<" "<<r2;

}

else if(disc == 0)
{
r1 = (-b)/(2*a);
cout<<"Real and Same "<<endl;
cout<<"r1 = r2 = "<<r1<<endl;
}

else

{
real = (-b)/(2*a);

img = (sqrt(-disc))/(2*a);
cout<<"complex and different"<<endl;
cout<<real<<" "<<img;
}

return 0;

} 
