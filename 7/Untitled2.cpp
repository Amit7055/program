#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

main()
{
	int i,n=0;
	cout<<setw(7)<<"XXX\n";
	int out=3,inner=4;
	for(i=0;i<=2;i++)
	{
		cout<<setw(out)<<"X"<<setw(inner)<<"X"<<endl;
		out--;
		inner+=2;
	}
	 out=1,inner=6;
	for(i=0;i<=2;i++)
	{
		cout<<setw(out)<<"X"<<setw(inner+1)<<" "<<"X"<<endl;
		out++;
		inner-=2;
	}
	cout<<setw(7)<<"XXX\n";
	/*for(i=1;i<5;i++)
	{
		cout<<"X"<<setw(5-i)<<"X"<<endl;
	}*/
}