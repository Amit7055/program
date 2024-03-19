/*
1. take the total bill amount from user and then depending on sell give discount
   if total_bill>10000 10% off, if bill is between 9999 to 5000 5% off on bill ,
   if bill in 4999 to 2000 2% off
   below 2000 just 100INR off.
  output: Total bill amount  11000
                discount given x% 10%
                Discount of INR  1100
                Amount to pay   -----------
*/

#include<iostream>
using namespace std;

int main()
{
	float total_bill,bill_amount,discount;
	
	cout<<"Enter total bill : ";
	cin>>total_bill;
	
	if(total_bill>=10000)
	{
		discount=(10*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 10% will be INR "<<discount;
		bill_amount=total_bill-discount;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else if(total_bill<9999 && total_bill>=5000)
	{
		discount=(5*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 5% will be INR "<<discount;
		bill_amount=total_bill-discount;
	    cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else if(total_bill<4999 && total_bill>=2000)
	{
		discount=(2*total_bill)/100;
		cout<<"\nDiscount given on "<<total_bill<<" is 2% will be INR "<<discount;
		bill_amount=total_bill-discount;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
	else
	{
		cout<<"\nDiscount given on "<<total_bill<<"  will be INR 100";
		bill_amount=total_bill-100;
		cout<<"\nBill Amount to pay : "<<bill_amount;
	}
}