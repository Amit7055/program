#include<iostream>
using namespace std;

main()
{
	int m[10][10]={{10,5,2},{7,8,1},{6,11,4}},rows=3,columns=3,r,c;
	int num;
	cout<<"Enter number";
	cin>>num;
	cout<<"\nEntered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
	
	cout<<"\nEntered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  m[r][c]=m[r][c]+num;
			  cout<<m[r][c]<<"\t";
		    }
     	}
}