#include<iostream>
using namespace std;



void multiply(int arr[] , int n)
{
	
	for(int i = 0; i <n ; i++)
	{	
		cout<<"Enter number of element : ";
		cin>>arr[i];
		
		int result = n * 2;
	}	
}


int main()
{

	int n;
	cout<<"Enter the numbers :";
	cin>>n;
	int arr[n];
	multiply(arr , n);
	for(int i = 0; i <n ; i++)
	{	
		cout<<"The array is : " <<arr[i]<<endl;
	}
	
	
return 0;
}






































