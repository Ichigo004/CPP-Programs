#include<iostream>
#include<string>
using namespace std;

class Student
{
	const int rollno;
	string name;
	int age;
	
	public:
	Student() : rollno(50)
	{
		cout<<"Default constructor"<<endl;
		cout<<"Address of this pointer is : " <<this<<endl;
	}
	
	Student(string n , int a) : name(n), age(a), rollno(50)
	{
		cout<<"Parameter constructor"<<endl;
		cout<<"Address of this pointer is : " <<this<<endl;
	}
	
	
	void Accept()
	{
		cout<<"Enter the name : ";
		cin>>name;
		cout<<"Enter the age : ";
		cin>>age;
	}
	
	void Display()
	{
		cout<<name<<" "<<age<<" "<<rollno<<endl;
	}
	
};

int main()
{
	cout<<"Student s1 "<<endl;
	Student s1;
	s1.Accept();
	s1.Display();
	
	cout<<"Student s2 "<<endl;
	Student *s2 = new Student();
	s2->Accept();
	s2->Display();
	
	cout<<"Student s3 "<<endl;
	Student *s3 = new Student[3];
	
	for(int i = 0; i<3 ; i++)
	{
		s3[i].Accept();
	}
	
	for(int i = 0; i<3 ; i++)
	{
		s3[i].Display();
	}


	cout<<"Student s4 "<<endl;
	Student *s4 = new Student("advet" , 78 );
	s4->Display();

delete s2;
delete [] s3;
delete s4;

return 0;

}
