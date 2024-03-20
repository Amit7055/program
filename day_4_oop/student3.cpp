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
			cout<<"\nRoll No.: "<<roll<<"\nName    : "<<name<<"\nGender  : "<<gender;
		}
		
		int get_roll()
		{
			return(roll);
		}
		
		void display()
		{
			cout<<"\nRoll No.: "<<roll<<"\tName : "<<name<<"\tGender : "<<gender<<"\n";
		}
};

int Student :: roll_no=0;

int main()
{
	string name,gender;
	int i,n,flag=0,ch,ro,count=0,m;
	Student *s[n];
	
    do
    {
    	
    	cout<<"\n1.Res \n2.Search \n3.List of all \n0.Exit \n: ";
    	cin>>ch;
    	
    	if(ch==1)
    	{
    		cout<<"enter no. of entry:";
    	    cin>>n;
		}
    	
    	switch(ch)
    	{
    		case 1:
    			for(i=0 ; i<n ; i++)
	            {
	                cout<<"\nenter name   :";
	                cin>>name;
                	cout<<"enter gender :";
                	cin>>gender;
	                s[i]=new Student(name,gender);
	            }
	            count=i;
	            break;
	        case 2:
	        	cout<<"Enter roll no: ";
	        	cin>>ro;
	        	flag=0;
	        	for(int j=0 ; j<i ; j++)
	            {
	                if(ro==s[j]->get_roll())
		  			{
		  				s[j]->display();
		  				flag=1;
		  				break;
					}
		  		}
		  		if(flag==1)
		  		cout<<"NOT FOUND";
	            break;
	        case 3:
				cout<<"\nList of students...\n-------------------------------\n";
				for(int i=0;i<n;i++)
					{
					  s[i]->display();
					 }
	        	
	        case 0:
	        	cout<<"Exit";
	        	break;
	        default  :
			    cout<<"Wrong choice:";
			    break;
		}
	}
	while(ch!=0);
	return 0;
	
}