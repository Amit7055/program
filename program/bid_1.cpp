#include<iostream>
#include<string>
using namespace std;

int main()
{
	int choice,tea=10,t=0,cofee=40,c=0,water=20,w=0,ice=35,cc=0;
	float total,net,pro;
	do
	{
		cout<<"\n----------------------\nLena Tea Stall\n----------------------\n";
		cout<<"\n1. Tea \n2. Coffee\n3. Water\n4.Ice-Cream\n0.Exit\n:";
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
			    t++;
			    break;
			case 2:
			    cout<<"\nCofee selected: \n";
			    c++;
			    break;
			case 3:
			    cout<<"\nWater selected: \n";
			    w++;
			    break;
			case 4:
			    cout<<"\nIce-cream selected: \n";
			    cc++;
			    break;
			case 0:cout<<"\n-----------------------Lena Tea Stall Bill-----------------------\n";
				cout<<"\nTotal Amount of Tea        :"<<tea<<" X "<<t<<" = "<<tea*t;
				cout<<"\nTotal Amount of Coffee     :"<<cofee<<" X "<<c<<" = "<<cofee*c;
				cout<<"\nTotal Amount of Water      :"<<water<<" X "<<w<<" = "<<water*w;
				cout<<"\nTotal Amount of Ice-cream  :"<<ice<<" X "<<cc<<" = "<<cc*ice;
				cout<<"\n------------------------------------------------------------------";
				cout<<"\nTotal cost on Tea       : "<<t*2;
				cout<<"\nTotal cost on Coffee    : "<<c*20;
				cout<<"\nTotal cost on Water     : "<<w*2;
				cout<<"\nTotal cost on Ice-cream : "<<cc*10;
				//cout<<"\n------------------------------------------------------------------";
				pro=t*2+c*20+w*2+cc*10;
				cout<<"\n------------------------------------------------------------------";
			    total=t*tea+cofee*c+water*w+cc*ice;
			    cout<<"\nTotal amount earn ="<<total;
			    cout<<"\n------------------------------------------------------------------";
			    cout<<"\nTotal net profit = "<<total-pro;
			    cout<<"\n------------------------------------------------------------------";
			    cout<<"\nThanks for vist: \n";
			    cout<<"------------------------------------------------------------------\n";
			    break;
			default:
				cout<<"\nInvalid choice: ";
				break;
		}
	}while(choice!=0);
return 0;
}