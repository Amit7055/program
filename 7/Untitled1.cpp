#include<iostream>
#include<math.h>
using namespace std;

int fact(int no)
{
	if(no==1)
	  return 1;
	else
	return no*fact(no-1);
}

main()
{
	int i,n,sum=0;
	cout<<"Enter end number: ";
	cin>>n;
	
	//cout<<fact(n);
	for(i=1;i<=n;i++)
	{
		//int temp=fact(i);
		sum=sum+fact(i);
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<i<<"! + ";
	}
	
	cout<<" = "<<sum;
}