//lcm
#include<iostream>
using namespace std;

int gcd(int n1,int n2)
{
	int temp=n1%n2;
	if(n1%n2==0)
	return n2;
	else 
		return gcd(n2,temp);

}

main()
{
	int a,b,c;
	
	cout<<"Enter 2 number to check LCM :";
	cin>>a>>b;
	//c=gcd(a,b);
	if(a>b)
	cout<<"LCM is :"<<a*b/gcd(a,b);
	else
	cout<<"LCM is :"<<a*b/gcd(b,a);
}