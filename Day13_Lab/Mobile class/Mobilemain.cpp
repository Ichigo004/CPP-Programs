#include "Mobile.h"


int main()
{

	Mobile m[2];
	int num = 0;

	int choice;

	do
	{
		cout<<"*****************************"<<endl;
		cout<<"Menu Driven "<<endl;
		cout<<"1.Add Mobile Phone to file "<<endl;
		cout<<"2.Read all Mobile From file "<<endl;
		cout<<"3.Mobile sorted by Price "<<endl;
		cout<<"4.Exit "<<endl;

		cin>>choice;

		switch(choice)
		{

			case 1:
				{
					Mobile m1;			
					m1.Accept();
						
					break;
				}	

			case 2:
				{
					for(int i = 0; i<2 ; i++)
					{

					m[i].Display();

					}

					break;
				}
			case 4:
				exit(0);

		}
	}
		while(choice != 0);
	return 0;
}
