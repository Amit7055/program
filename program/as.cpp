#include<iostream>
using namespace std;

int main()
{
	float total_bill,bill_amount,discount=0,discount1=0,discount2=0,discount3=0,discount4=0,total=0;
	
	do
	{
		cout<<"\nEnter total bill(to exit enter 0) : ";
	    cin>>total_bill;
	    
	    if(total_bill>=10000)
	{
		discount1=(10*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 10% will be INR "<<discount1;
		bill_amount=total_bill-discount1;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else if(total_bill<9999 && total_bill>=5000)
	{
		discount2=(5*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 5% will be INR "<<discount2;
		bill_amount=total_bill-discount2;
	    cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else if(total_bill<4999 && total_bill>=2000)
	{
		discount3=(2*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 2% will be INR "<<discount3;
		bill_amount=total_bill-discount3;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else if(total_bill<2000 && total_bill>0)
	{
		cout<<"\nDiscount given on "<<total_bill<<"  will be INR 100";
		discount4++;
		bill_amount=total_bill-100;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	discount=discount1+discount2+discount3+discount4*100;
	}while(total_bill!=0);
	cout<<"Total discount is : "<<discount;
}