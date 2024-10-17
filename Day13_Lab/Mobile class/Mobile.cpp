#include "Mobile.h"


Mobile::Mobile()
{
}


Mobile::Mobile(string serialno , string model , string name , int price):serialNo(serialno) , modelNo(model) , brandname(name) , price(price),Mobile
{
	cout<<"Mobile Paarammeter ctor :"<<endl;
}


	void Mobile::Accept()
{
	ofstream fout("Mobile.txt", ios::app);
	cout<<" Enter your brandname";
	cin>>brandname;
	cout<<"Enter Model number ";
	cin>>modelNo;
	cout<<"Enter serial Number :";
	cin>>serialNo;
	cout<<"Enter Price :";
	cin>>price;


	fout<<brandname<<"\t"<<modelNo<<"\t"<<serialNo<<"\t"<<price<<endl;

	fout.close();
}


	void Mobile::Display()
{

	ifstream fin("Mobile.txt", ios::in);

   
	fin>>brandname>>modelNo>>serialNo>>price;

	cout<<brandname<<"is the brand name"<<endl;
	cout<<modelNo<<"is the model number"<<endl;
	cout<<serialNo<<"is the serial number"<<endl;
	cout<<price<<"is the price"<<endl;


	fin.close();

}

/*	void Mobile::sortfile()
{
	ifstream fin("Mobile.txt" , ios::in);
	int count = 0;

	 while (fin >> Mobile[count].brandname >> Mobile[count].modelNo >> Mobile[count].serialNo >> Mobile[count].price) {
        count++;
    }

}
*/




























