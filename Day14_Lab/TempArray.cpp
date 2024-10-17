#include<iostream>
using namespace std;

template <class T>

class Array
{
	T *p;
	int size;

	public:

	Array(int s):size(s)
	{
		cout<<"Para Ctor "<<endl;
		 p = new T [size];
	}

	void Accept()
	{
		cout<<"Enter the element : "<<endl;

		for(int i = 0 ; i < size ; i++)
		{
			cin>>p[i];
		}
	}

	void Display()
	{

		cout<<" the element are : "<<endl;

		for(int i = 0 ; i < size ; i++)
		{
			cout<<p[i]<<endl;
		}
	}

	~Array()
	{
		cout<<"Dtor call "<<endl;
		delete[]p;
	}

};

int main()
{
	Array <int>a(4);
	a.Accept();
	a.Display();


	Array <float>b(4);
	b.Accept();
	b.Display();
	
	Array <char>c(4);
	c.Accept();
	c.Display();

	return 0;
}
