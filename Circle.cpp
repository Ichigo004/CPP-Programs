#include<iostream>
using namespace std;

const double PI = 3.14;
class Circle
{
	double radius;

	public:
	Circle(double rad) : radius(rad)
	{
		cout<<"Default constructor"<<endl;
	}

	void Accept()
	{
		cout<<"Enter the radius :";
		cin>>radius;
	}


/*	void Display()
	{
		cout<<"E

	*/

	double Area()const
	{
		return PI * (radius*radius);
	}

	double circumference()const
	{
		return 2 * PI * radius;
	}

};

int main()
{
	Circle c1 , c2;
	c1.Accept();
	c1 Area();
	cout<<"Area of circle is : " << c1.Area()<<endl;


	c2.Accept();
	c2.circumference();
	cout<<"Circumference of circle is : " << c2.circumference()<<endl;

return 0;

}














