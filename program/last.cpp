#include<iostream>
using namespace std;

int main()
{
	int number,last;
	cout<<"Enter number: ";
	cin>>number;
	last=number%10;
	cout<<"last digit of "<<number<<" is "<<last;
	return 0;
}