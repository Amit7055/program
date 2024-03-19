//create code to rotate content of array clockwise for n user given times
//print each rotation
//input: [11,22,33,44,55]
//rotate:3
//print output [22,33,44,55,11] [33,44,55,11,22] [44,55,11,22,33]
#include <iostream>

using namespace std;
int main()
{
	int a[]={11,22,33,44,55},index,temp,size,count,c;
	size=sizeof(a)/sizeof(a[0]);
	cout<<"Enter number of time to rotate:";
	cin>>count;
	for(c=1;c<=count;c++)//cycle count
	{
		temp=a[0];
		for(index=0;index<size-1;index++)//shift
			{

				a[index]=a[index+1];
			}
			a[size-1]=temp;
			cout<<"\n";
		for(index=0;index<size;index++)//print
			{
			cout<<a[index]<<",";
			}
	}
	return 0;
}