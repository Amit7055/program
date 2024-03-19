#include<iostream>
#include<string>
using namespace std;

int main()
{
	int choice;
	do
	{
		cout<<"\n----------------------Lena Tea Stall----------------------\n";
		cout<<"\n1. Tea \n2. Coffee\n3. Water\n4.Ice-Cream\n0.Exit\n";
		cin>>choice;
		
		/*if(choice==1)
		cout<<"1. Tea";
		else if(choice==2)
		cout<<"2. Cofee";
		else if(choice==3)
		cout<<"3. Water";
		else if(choice==4)
		cout<<"4. Ice-cream";
		else if(choice==0)
		cout<<"0.exit";*/
		
		switch(choice)
		{
			case 1:
			    cout<<"\nTea selected: \n";
			    break;
			case 2:
			    cout<<"\nCofee selected: \n";
			    break;
			case 3:
			    cout<<"\nWater selected: \n";
			break;
			case 4:
			    cout<<"\nIce-cream selected: \n";
			    break;
			case 0:
			    cout<<"\nThanks for vist: \n";
			    break;
			default:
				cout<<"\nInvalid choice: ";
				break;
		}
	}while(choice!=0);
return 0;
}