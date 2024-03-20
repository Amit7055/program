#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		string name,gender;
		
		int roll;
	public:
		static int roll_no;
		Student(string name,string gender)
		{
			this->name=name;
			this->gender=gender;
			roll_no++;
			roll=roll_no;
			//cout<<"\nRoll No.: "<<roll<<"\nName    : "<<name<<"\nGender  : "<<gender;
		}
		
		void display()
		{
			cout<<"\nRoll No.: "<<roll<<"\tName : "<<name<<"\tGender : "<<gender;
		}
};

int Student :: roll_no=0;

int main()
{
	string name,gender;
	int i,n=10;
/*	cout<<"enter name   :";
	getline(cin,name);
	cout<<"enter gender :";
	cin>>gender;*/
	
	/*Student s1("amit","male");
	cout<<"\n";
	Student s2("suman","female");
	cout<<"\n";
	s1.display();
	s2.display();*/
	
	Student *s[10];
	
	for(i=0 ; i<10 ; i++)
	{
	cout<<"\nenter name   :";
	getline(cin,name);
	cout<<"\nenter gender :";
	cin>>gender;
	s[i]=new Student(name,gender);
	}
	
	for(i=0 ; i<10 ; i++)
	{
	    s[i]->display();
	}
	return 0;
	
}