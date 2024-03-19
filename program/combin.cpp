#include<iostream>
#include<string>
using namespace std;

main()
{
	string name;
	int roll,mark[5],i,total=0;
	float per;
	
	cout<<"Enter Name                : ";
	getline(cin,name);
	
	cout<<"Enter Roll No.            : ";
	cin>>roll;
	
	cout<<"Enter marks of 5 subjects : \n";
	
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter " <<" subject  "<<i+1<<" marks   : ";
		cin>>mark[i];
		total=total+mark[i];	
	}
	per=((float)total*100)/500;
	cout<<"Ohh hi "<<name<<" and your roll no. is "<<roll;
	cout<<"\nyour Total is "<<total<<" and percentage is "<<per<<"%";
	
	if(per>=60)
	{
		cout<<"\nClass: first class";
	}
	else if(per<60 && per>=50)
	{
		cout<<"\nClass: second class";
	}
	else if(per<50 && per>=40)
	{
		cout<<"\nClass: pass class";
	}
	else
	{
		cout<<"\nClass: fail";
	}
}