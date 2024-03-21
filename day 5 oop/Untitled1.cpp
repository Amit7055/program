#include<iostream>
using namespace std;

class a
{
	public:
		a()
		{
			cout<<"\na";
			cout<<"\n----a";
		}
};

class b:public virtual a
{
	public:
		b()
		{
			cout<<"\nb";
		}
};
class c:virtual public a
{
    public:
	c()
	{
		cout<<"\nc";
		}	
};
class x:public b,public c
{
    public:
	x()
	{
		cout<<"\nx";
		}
};
main()
{
	x objx;
}