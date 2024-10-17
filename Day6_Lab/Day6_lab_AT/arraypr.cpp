#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
private:
	double salary;

public:
	int empno;
	string name;
	string dept;
	

//to access private
double getSalary() 
{
	return salary;
}




//for input
void Input()
{

		cout<<"enter empno : ";
		cin>>empno;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter dept : ";
		cin>>dept;
		cout<<"enter salary : ";
		cin>>salary;

}



//for output
void Output()
{
	cout<<"Empno "<<empno<<endl;
	cout<<"EmpName "<<name<<endl;
	cout<<"Department "<<dept<<endl;
	cout<<"Salary "<<salary<<endl;
}


/*
//to access private
int Salary()
{
	return salary;
}
*/
};


int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	Employee emp[n];
	
	for(int i = 0; i < n ; i++)
	{
		emp[i].Input();
	}
	
	for(int i = 0; i < n ; i++)
	{
		emp[i].Output();
	}
	
return 0;

}










































