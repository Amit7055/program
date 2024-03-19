#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int min=1000,number,num;
	int temp;
	cout<<"Enter price :";
	cin>>temp;
	do
	{
		
		cout<<"Enter number: ";
		cin>>number;
		
		if(number<0)
		break;
		
		
		else if(abs(temp-number)<min)
		{
			min=abs(temp-number);
			num=number;
		}
		
	}
	while(true);
	cout<<"\n"<<num;
}