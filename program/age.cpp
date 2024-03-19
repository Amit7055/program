#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"Enter Age: ";
	cin>>age;
	
	if(age<18)
	cout<<"Give Burger:";
	else
	{
		int choice;
		
		
		int i=1;
		do
		{
			cout<<"1.Non-Veg"<<"\n2.Veg \n";
		    cin>>choice;
		    if(choice==1)
		    {
		    	cout<<"Give Chicken:";
		    	break;
			}
		    else if(choice==2)
		    {
		    	cout<<"Give Khichidi:";
		    	break;
			}
			else if(choice>=3)
			{
				cout<<"invalid choice\n";
			}	
		    i++;
		}
		while(i>0);
		
		//else
		//cout<<"Invalid Choice:";
	}
	return 0;
}