/*
7. Create a class 'Student' with three data members which are name, age and address. 
The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available".
It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the 
second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 
10 students.
Hint - Use array of objects.
*/

#include<iostream>
using namespace std;

class Student
{
	private:
		string name,address;
	    int age;
	public:
		Student()
		{
			name="unknown";
			address="not available";
			age=0;
		}
		void setInfo(string name,int age)
		{
			this->name=name;
			this->age=age;
		}
		void setInfo(string name,int age,string address)
		{
			this->name=name;
			this->age=age;
			this->address=address;
		}
		void display()
		{
			cout<<"\nName : "<<name<<"\nAge : "<<age<<"\nAddress : "<<address;
		}
};

int main()
{
	int num=10;
	
	Student s[num];
	
	for(int i = 0; i < 10 ; i++)
	{
		string name,address;
	    int age;
	    
		cout<<"Enter the name : ";
		getline(cin,name);
		
		cout<<"Enter the address : ";
		getline(cin,address);
		
		cout<<"Enter the age : ";
		cin>>age;
		cin.ignore(); // Clear input buffer

		s[i].setInfo(name,age,address);
	}
	
	for(int i = 0; i < 10 ; i++)
	{
		s[i].display();
	}
	return 0;	
}