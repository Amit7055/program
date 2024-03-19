/*
2 accept a number from user only if number is perfectly div by 5 and 3 else till it is not given 
keep taking number.
*/

#include<iostream>
using namespace std;

int main()
{
	int number;
	do
	{
		cout<<"\nEnter number to check is perfectly div by 5 and 3 : ";
		cin>>number;
		
		if(number%5==0 && number%3==0)
		{
			cout<<number<<" : is perfectly div by 5 and 3 ";
			break;
		}
		else
		{
			cout<<number<<" : is not perfectly div by 5 and 3 ";
		}
	}while(true);
}