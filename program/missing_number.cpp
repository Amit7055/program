#include<iostream>
using namespace std;

main()
{
	int a[]={1,2,3,6,7,9},i,start,end,size,count=0;
	int flag=0;//no
	size=sizeof(a)/sizeof(a[0]);
	start=a[0];
	end=a[size-1];
	
	while(start<end)
	{
		flag=0;
		for(i=0 ; i<size; i++)
		{
			if(a[i]==start)
			flag=1;
	    }
		    if(flag == 0)
		    {
			cout<<start;
			count++;
		    }
	    
		start++;
	}
	cout<<"Total: "<<count;
}