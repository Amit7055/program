#include<iostream>
#include<string>
using namespace std;
class Calculator
{
 private:
 	float no1,no2;
 public:	 
	 void add(float no1,float no2)
	 {
	 	this->no1=no1;
 		this->no2=no2;
	 	cout<<no1<<" + "<<no2<<" = "<<no1+no2;
	 }
	 
	 void sub(float no1,float no2)
	 {
	 	this->no1=no1;
 		this->no2=no2;
	 	cout<<no1<<" - "<<no2<<" = "<<no1-no2;
	 }
	 void mul(float no1,float no2)
	 {
	 	this->no1=no1;
 		this->no2=no2;
	 	cout<<no1<<" * "<<no2<<" = "<<no1*no2;
	 }
	 void div(float no1,float no2)
	 {
	 	this->no1=no1;
 		this->no2=no2;
	 	cout<<no1<<" / "<<no2<<" = "<<no1/no2;
	 }
};
int main()
{
	Calculator c;
	int no1,no2,ch,flag;
	
	do
	{
	cout<<"\n1.Add ";
	cout<<"\n2.Sub ";
	cout<<"\n3.Mul ";
	cout<<"\n4.Div ";
	cout<<"\n0.Exit ";
	cout<<"\nEnter choice : ";
	cin>>ch;
	
	
	switch(ch)
	{
		case 1:
			cout<<"Enter 2 number: ";
	        cin>>no1>>no2;
			c.add(no1,no2);
			break;
		case 2:
			cout<<"Enter 2 number: ";
	        cin>>no1>>no2;
			c.sub(no1,no2);
			break;
		case 3:
			cout<<"Enter 2 number: ";
          	cin>>no1>>no2;
			c.mul(no1,no2);
			break;
		case 4:
			cout<<"Enter 2 number: ";
	        cin>>no1>>no2;
			c.div(no1,no2);
			break;
		default  :
			if(ch>0)
			cout<<"Wrong choice:";
			else
			cout<<"Exit";
			break;
	}
	}while(ch!=0);
}      