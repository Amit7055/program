#include<iostream>
using namespace std;

main()
{
    int age;
	
	cout<<"Enter Age: ";
	cin>>age;
	
	if(age<18)
	cout<<"Give Burger:";
	else
	{
		int i;
		for(i=0;true;i++)
		{
			int choice;
		    
		
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
	    }
	}
}