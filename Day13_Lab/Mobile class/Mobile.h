#ifndef MOBILE_H
#define MOBILE_H

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Mobile
{
	string serialNo;
	string modelNo;
	string brandname;
	int price;
	
	public:
	Mobile();
	Mobile(string , string , string , int);
	void Accept();
	void Display();
	void sortfile();

};

#endif



























