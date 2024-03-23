//roots of quadratic equation formula
#include<iostream>
#include<math.h>
using namespace std;

main()
{
	float a,b,c,temp;
	float r1,r2;
	cout<<"Enter value a :";
	cin>>a;
	cout<<"Enter value b :";
	cin>>b;
	cout<<"Enter value c :";
	cin>>c;
	temp=b*b-4*a*c;
	
	if(temp<0)
	cout<<"\nNo roots for given value: ";
	
	else
	{
		r1=(-b+sqrt(temp))/2*a;
		r2=(-b-sqrt(temp))/2*a;	
		cout<<"\nRoot 1: "<<r1;
	    cout<<"\nRoot 2: "<<r2;
	}
}