#include<iostream>
using namespace std;


void sort(int *arr, int n)
{
for(int i = 0; i< n-1 ; i++)
{
for(int j = 0; j < n-1-i ; j++)
{

if(arr[j] > arr[j+1])
{

int temp = arr[j];

arr[j]  = arr[ j + 1];

arr[j +1] = temp;

}

}
}

cout<<"Sorted array is : "<<endl;

for(int i = 0; i < n ; i++)
{

cout<<arr[i]<<" ";

}

}


int main()
{
int n;
cout<<"Enter the element : ";
cin>>n;

int *arr = new int [n];

for(int i = 0; i < n ; i++)
	{
	cin>>arr[i];
}

sort(arr , n);

delete[] arr;



return 0;

}

























