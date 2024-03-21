#include<iostream>
using namespace std;

main()
{
	int a=10;
	int b=20;
	int *p;
	cout<<"\na= "<<a<<"\tb= "<<b;
	*p=a;
	a=b;
	b=*p;
	
	cout<<"\na= "<<a<<"\tb= "<<b;
}