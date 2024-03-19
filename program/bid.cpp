#include<iostream>
using namespace std;

int main()
{
	int max=0;
	
	do
	{
		int number;
		cout<<"Enter number:(-ve to exit): ";
		cin>>number;
		if(number<0)
		{
			break;
		}
		else if(number>0)
		{
		     if(number>max)
			{
				max=number;
			}
		}	
	}
	while(true);
	cout<<"Maximum bid was :"<<max;
}