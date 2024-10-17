#include<iostream>
#include<string>
#include<algorithm>



using namespace std;

int main()
{

string s;
cout<<"Enter the dragon :";

getline(cin , s);


reverse(s.begin() , s.end());

cout<<"The house of dragon is : "<<s<<endl;

return 0; 

}






















