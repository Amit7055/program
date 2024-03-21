//pointer of super class can ref to object of sub class
//if some method are overridden then pointer will only ref to own type
//unless super class has virtual method that enables us to override
#include<iostream>
using namespace std;
class A
{
	public:
		virtual void My_A()
		{
			cout<<"\nMy_A method called";
		}
};
class B:public A
{
	public:
		void My_A()
		{
			cout<<"\nMy_B method called";
		}
};
int main()
{
   A obja;
   B objb;
   A *p;
   p=&obja;
   p->My_A();
   p=&objb;
   p->My_A();
   
}