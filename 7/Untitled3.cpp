#include<iostream>
using namespace std;

main()
{
	int a=10,b=20;
	cout<<"Before a = "<<a<<" b = "<<b;
	/*a=a+b;
	b=a-b;
	a=a-b;*/
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"\nafter a = "<<a<<" b = "<<b;
}