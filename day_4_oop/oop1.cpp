#include<iostream>
#include<string>
using namespace std;
class Human
{
 private:
 	string gender,name;//data members
 public:
 	//function members
 	void set_gender(string g)
 	{
 		gender=g;
 		cout<<"gender set to "<<gender;
	 }
	 void set_name(string n)
	 {
	 	name=n;
	 	cout<<"name set to "<<name;
	 }
	 void display_all()
	 {
	 	cout<<"\nHi i am "<<name<<" a "<<gender;
	 }
};
int main()//start of code
{
	Human h,h2;//Human class has object h
	string n,g;//local members to take data from user
	cout<<"\n1 Enter gender to set:";
	cin>>g;
	h.set_gender(g);
	cout<<"\n1 Enter name to set:";
	cin>>n;
	h.set_name(n);
	cout<<"\n2 Enter gender to set:";
	cin>>g;
	h2.set_gender(g);
	cout<<"\n2 Enter name to set:";
	cin>>n;
	h2.set_name(n);
	cout<<"Intros called for both";
	h.display_all();
	h2.display_all();

	return 0;//return to indicate program is over
}//scope end