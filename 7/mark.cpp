#include<iostream>
using namespace std;

class stdd
{
	private:
		string name;
		int roll,total;
	public:
		void getdata(string n,int r,int t)
		{
			name=n;
			roll=r;
			total=t;
		}
		
		void display()
		{
			cout<<"\nName : "<<name<<"\tRoll No.: "<<roll<<"\tTotal marks : "<<total;
		}
		
	friend int operator<(stdd s1, stdd s2);
};
int operator<(stdd s1, stdd s2)
{
	return s1.total-s2.total;
}

main()
{
	stdd s1,s2;
	s1.getdata("abc",21,499);
	s2.getdata("asd",22,499);
	int result=s1<s2;
	
	if(result>0)
	 {
	 	cout<<"winner\n";
	 	s1.display();
	 }
	else if(result==0)
	{
		cout<<"Both winner:";
		s1.display();
		s2.display();
	}
	else
	{
		cout<<"winner\n";
		s2.display();
	}
	
}