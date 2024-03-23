#include<iostream>
using namespace std;

void remove_duplicate(int a[],int size)
{
	int i,k,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1; j<size;j++)
		{
			if(a[i]==a[j])
			{
				for( k=j ; k<size-1; k++)
				{
					a[k]=a[k+1];
				}
	        size--;
	        j--;//to remove multiple number back to back
			}
	    }
	}
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"  ";
	}
}

main()
{
	int a[]={10,20,10,30,10,20,10,40};
	
	remove_duplicate(a,sizeof(a)/sizeof(a[0]));
}