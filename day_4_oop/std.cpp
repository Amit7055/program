//CREATE CLASS STUDENT
//HAS CONSTRUCTOR THAT READS NAME GENDER AND AUTO GENERATES ROLLNO
//HAS DISPLAY() THAT PRINTS ROLLNO-NAME-GENDER
//phase 2:
//convert to array of object for 10 students
//phase 3:
//menudriven to register(add),search a student on rollno,print list

#include<iostream>
using namespace std;
class Student
{
	private:
		string name,gender;
		int rollno;
	public:
		int static rollno_generator;
		Student(string name,string gender)
		{
			this->name=name;
			this->gender=gender;
			rollno_generator++;
			rollno=rollno_generator;
			cout<<"\nHi "<<name<<" remeber your roll no is "<<rollno;
		}
		void display()
		{
			cout<<"\nRoll no:"<<rollno<<"\tName:"<<name<<"\tGender:"<<gender;
		}
		int get_rollno()
		{
			return rollno;
		}
		void edit()
			{
				int choice;
				cout<<"\n1.edit name\n2.edit gender\n:";
				cin>>choice;
				if(choice==1)
				{
					cout<<"\nOld Name:"<<name;
					cout<<"\nNew:";
					cin>>name;
					display();
				}
				else if(choice==2)
				{
					cout<<"\nOld Gender:"<<gender;
					cout<<"\nNew:";
					cin>>gender;
					display();
				}
				else
					cout<<"\nWrong choice given exiting edit state.";

			}
	    

};
int Student::rollno_generator=0;
int main()
{
	int i=0,ch,flag,rno,change;
	string name,gender;
	Student *s[120];//array of pointers for Student type
	do
	{
	  cout<<"\n1.Register new student\n2.Serach a student\n3.Edit\n4.List all student\n0.Exit\n:";
	  cin>>ch;
	  switch(ch)
	  {
	    case 1:
				cout<<"\nEnter name and gender";
				cin>>name>>gender;
				s[i]=new Student(name,gender);//created object and saved in s[i] pointer
				i++;
				break;
		case 2:
				cout<<"Enter roll number:";
				cin>>rno;
				flag=0;//not found
				for(int index=0;index<i;index++)
					{
					if(rno==s[index]->get_rollno())
					 {
					 	s[index]->display();
					 	flag=1;//found
					 	break;
					 }
				    }
				    if(flag==0)
				    	cout<<"Not Found";
				break;
		case 3:cout<<"Enter roll number:";
				cin>>rno;
				flag=0;//not found
				for(int index=0;index<i;index++)
					{
					if(rno==s[index]->get_rollno())
					 {
					 	s[index]->edit();
					 	flag=1;//found
					 	break;
					 }
				    }
				    if(flag==0)
				    	cout<<"Not Found";
				break;
			    
		case 4:
				cout<<"\nList of students...\n-------------------------------\n";
				for(int index=0;index<i;index++)
					{
					  s[index]->display();
					 }
				break;
		case 0:
			cout<<"Exiting...";
			break;
		default:
			cout<<"Error in choice...";
			break;
	}
	}while(ch!=0);
	}
