//print only female data and then male data
//to compare use strcmp()
//private data--->outside---class???????????
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

	 }
	 void set_name(string n)
	 {
	 	name=n;
	 }
	 string get_gender()//leak mathod:way to access private data to public
	 {
	 	return gender;
	 }
	 void display()
	 {
	 	cout<<"\nHi i am "<<name<<" a "<<gender;
	 }
};
int main()//start of code
{
	int entry;
		cout<<"Enter number of entry: ";
		cin>>entry;
    class Human h[entry];//array of object
    string n,g;
    for(int i=0;i<entry;i++)
    	{
    		cout<<"\nFor human no "<<i+1<<" gender:";
    		cin>>g;
			cout<<"\nFor human no "<<i+1<<" name:";
    		cin>>n;
    		h[i].set_gender(g);
    		h[i].set_name(n);
		}
		cout<<"\nfemale are\n----------------\n";
		for(int i=0;i<entry;i++)
    	{
    	  if("female"==h[i].get_gender())
		  			h[i].display();
		}
		cout<<"\n----------------\n";
		cout<<"\n----------------\n";
		cout<<"\nmale are\n----------------\n";
		for(int i=0;i<entry;i++)
    	{
    	  if("male"==h[i].get_gender())
		  			h[i].display();
		}
	return 0;//return to indicate program is over
}//scope end
