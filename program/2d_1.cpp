#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,min,max;
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
	cout<<"\nEntered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
	for(r=0;r<rows;r++)
		{
		  cout<<"\nin row "<<r;
		  min=m[r][0];//ref
		  for(c=0;c<columns;c++)
			{
			  if(m[r][c]<min)
			  	min=m[r][c];
		    }
		    m[r][c]=min;
			cout<<" min is:"<<min;
     	}
     	
     	for(c=0;c<columns;c++)
		{
		  cout<<"\nin columns "<<c;
		  min=m[0][c];//ref
		  for(r=0;r<rows;r++)
			{
			  if(m[r][c]<min)
			  	min=m[r][c];
		    }
		    m[r][c]=min;
			cout<<" min is:"<<min;
     	}
     	
     	cout<<"\n\n";
     	cout<<"\nEntered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
	for(r=0;r<rows;r++)
		{
		  cout<<"\nin row "<<r;
		  max=0;//ref
		  for(c=0;c<columns;c++)
			{
			  if(m[r][c]>max)
			  	max=m[r][c];
		    }
		    m[r][c]=max;
			cout<<" max is:"<<max;
     	}
     	
     	for(c=0;c<columns;c++)
		{
		  cout<<"\nin columns "<<r;
		  max=0;//ref
		  for(r=0;r<rows;r++)
			{
			  if(m[r][c]>max)
			  	max=m[r][c];
		    }
		    m[r][c]=max;
			cout<<" max is:"<<max;
     	}
     	
		return 0;
}
