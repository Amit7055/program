#include<iostream>
using namespace std;

main()
{
	int a[]={1,2,3,4},i,j,size;
	size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]+a[j]==5)
			{
				cout<<"Max pair = "<<"("<<a[i]<<","<<a[j]<<")"<<"\n";
			}
		}
	}
}