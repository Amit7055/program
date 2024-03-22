/*
3. Write a c++ program to create a base class Employee(Emp-Code, Name, Salary).
 Derive two classes as 
Fulltime (daily_wages, number_of_days) and 
Parttime (number_of_working_hours, hourly_wages).
Write a menu driven program to perform following funcitons:
    1. Accept the details of 'n' employees and calculate the salary.
    2. Display the details of 'n' employees.
    3. Display the details of employee having maximum salary for both types of employees.
*/

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	protected:
		int emp_code;
		string name;
		float salary;
	public:
		Employee(int emp_code,string name)
		{
			this->emp_code=emp_code;
			this->name=name;
			//this->salary=salary;
		}
		virtual void cal_salary()=0;
		
		virtual void display()
		{
			cout<<"\nEmployee Code : "<<emp_code<<"\nName of Employee : "<<name<<"\nSalary : "<<salary;
		}
		float get_salary()
		{
			return salary;
		}
};

class Fulltime : public Employee
{
	private:
		float daily_wages;
		int number_of_days;
	public:
		Fulltime(float daily_wages,int number_of_days ,int emp_code,string name):Employee(emp_code,name)
		{
		    this->daily_wages=daily_wages;
		    this->number_of_days=number_of_days;
	    }
	    void cal_salary()
	    {
	    	salary=daily_wages*number_of_days;
		}
		void display()
		{
			Employee::display();
			cout<<"\nType: Full-time"<<"\nEmployee daily_wages : "<<daily_wages<<"\nnumber_of_days : "<<number_of_days;//<<"\nSalary : "<<salary;
		}
		
};

class Parttime : public Employee
{
	private:
		float working_hours;
		int hourly_wages;
	public:
		Parttime(float working_hours,int hourly_wages,int emp_code,string name):Employee(emp_code,name)
		{
		    this->hourly_wages=hourly_wages;
		    this->working_hours=working_hours;
	    }
	    void cal_salary()
	    {
	    	salary=hourly_wages*working_hours;
		}
		void display()
		{
			Employee::display();
			cout <<"\nType: Part-time "<<"\nEmployee hourly_wages : "<<hourly_wages<<"\nworking_hours         : "<<working_hours;//<<"\nSalary : "<<salary;
		}
};

main()
{
	Employee *e[100];
	string name;
	int no=0;
	int ch,code,max=0;
	int c;
	do
	{
		cout << "\nMenu:\n";
        cout << "1. Accept the details of 'n' employees and calculate the salary.\n";
        cout << "2. Display the details of 'n' employees.\n";
        cout << "3. Display the details of employee having maximum salary for both types of employees.\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
		switch(ch)
		{
			case 1: 
			int n ;
			cout<<"Enter number of the employees : ";
			cin>>n;
			for(int i = 0  ; i < n ; i++)
			{
				cout<<"Enter Employee Code : ";
				cin>>code;
				
				cout<<"Enter the Employee Name : ";
				cin>>name;
				
				int num;
				cout<<"Choice\n1.Fulltime\n2.Parttime\n: ";
				cin>>num;
				
				if(num==1)
				{
					float daily_wages;
					int number_of_days;
					cout<<"Enter daily wages    : ";
					cin>>daily_wages;
					
					cout<<"Enter number of days : ";
					cin>>number_of_days;
					
					e[no++] =new Fulltime(daily_wages,number_of_days,code,name);
				}
				
				else if(num==2)
				{
					float working_hours;
					int hourly_wages;
					cout<<"Enter the hourly wages : ";
					cin>>hourly_wages;
					
					cout<<"Enter working_hours    : ";
					cin>>working_hours;
					
					e[no++] =new Parttime(working_hours,hourly_wages,code,name);
				}
				
				else
				{
					cout<<"\nIvalid choice ";
				}
				
			}
			for(int i = 0; i < no; i++)
			{
				e[i]->cal_salary();
			}
			break;
			
			case 2:
				cout<<"\nEmployee Details:\n";
				for(int i = 0; i < no; i++)
				{
					e[i]->display();
				}
				break;
				
			case 3:
				cout<<"\nDetails of Employees with maximum salary:";
				for(int i = 0; i < no;  i++)
				{
					if(e[i]->get_salary() > max)
					{
						max=e[i]->get_salary();
						c=i;
					}
				}
				e[c]->display();
				break;
				
			default:
				if(ch==0)
				cout<<"Exit";
				else if(ch>3)
				cout<<"Invalid data:";
			
			
				
		}
	}
	while(ch!=0);
}