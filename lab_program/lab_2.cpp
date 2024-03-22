/*
2. Write a c++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, 
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker.
(Use Default values for Pay_Rate)
*/

#include<iostream>
using namespace std;

class worker
{
	private:
		string worker_name;
		int no_of_hours;
		float pay_rate=6.5;
		float salary;
	public:
		void worker_info()
		{
			cout<<"Enter the name of worker      : ";
			getline(cin,worker_name);
			
			cout<<"Enter the no. of hours worked : ";
			cin>>no_of_hours;
		}
		float salary_info()
		{
			return (no_of_hours*pay_rate);
		}
		void display()
		{
			cout<<"\nName          : "<<worker_name;
			cout<<"\nNo. of hours  : "<<no_of_hours;
			cout<<"\nPay per hours : $"<<pay_rate;
			cout<<"\nSalary        : $"<<salary_info();
		}
};

int main()
{
	worker w;
	w.worker_info();
	w.display();
}