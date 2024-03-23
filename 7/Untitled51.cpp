#include<iostream>
using namespace std;

class human
{
	protected:
		string name , gender;
};

class education : public human
{
	protected :
		string degree;
};

class job : public education
{
	protected:
		float salary;
	public:
		void setter()
		{
			cout<<"Enter name   : ";
			getline(cin,name);
			cout<<"Enter gender : ";
			cin>>gender;
			cout<<"Enter degree : ";
			cin>>degree;
			cout<<"Enter salary : ";
			cin>>salary;
		}
		void getter()
		{
			cout<<"\nName : "<<name<<"\tGender : "<<gender<<"\tDegree : "<<degree<<"\tSalary : "<<salary;
		}
};

main()
{
	job j;
	j.setter();
	j.getter();
}