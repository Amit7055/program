#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,sum=0;
	cout<<"Enter number of rows and columns\n";
	cin>>rows>>columns;
	for(r=0;r<rows;r++)
		{
		  for(c=0;c<columns;c++)
			{
				cout<<"\nEnter element at "<<r<<","<<c<<" :";
				cin>>m[r][c];
			}
		}

	cout<<"Entered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
     	
     	
    cout<<"\n-----------------------\n";
    for(c=0;c<columns;c++)
    {
    	sum=0;
    	
    	for(r=0;r<rows;r++)
    	{
    		sum=sum+m[r][c];		
		}
		cout<<sum<<"\t";
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"row sum is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		sum=0;
		  for(c=0;c<columns;c++)
			{	
			  sum=sum+m[r][c];
			  cout<<m[r][c]<<"\t";
		    }
		    cout<<"| "<<sum;
		    
     	}
	
		return 0;
}