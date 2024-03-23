/*
6. Write a C++ Program to accept 'n' numbers from user. store all Even and Odd Number in File "Even.txt" and "Odd.Txt".
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int number;
	int no;
	ofstream even("Even.txt" , ios::app);
	ofstream odd("Odd.txt" , ios::app);
	
	cout<<"Enter No. Input :";
	cin>>number;
	
	for(int i=0; i < number;i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>no;
		if(no%2 == 0)
		even<<no<<"\n";
		else
		odd<<no<<"\n";
	}

	even.close();
	odd.close();
	return  0;
}