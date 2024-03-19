#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,sum;
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
	//sum of rows
	for(r=0;r<rows;r++)
		{
		  sum=0;
		  for(c=0;c<columns;c++)
			{
			  sum+=m[r][c];
		    }
			m[r][c]=sum;
     	}
    //sum of columns
		for(c=0;c<columns;c++)
		{
		  sum=0;
		  for(r=0;r<rows;r++)
			{
			  sum+=m[r][c];
		    }
			m[r][c]=sum;
     	}
     	//sum of diagonal
     	sum=0;
		for(c=0;c<columns;c++)
		{
		  for(r=0;r<rows;r++)
			{
			  if(r==c)
			  	sum+=m[r][c];
		    }
     	}
     	m[r][c]=sum;
	cout<<"\nEntered matrix is";
	for(r=0;r<rows+1;r++)
		{ cout<<"\n";//start on new line
		  sum=0;
		  for(c=0;c<columns+1;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}

		return 0;
}