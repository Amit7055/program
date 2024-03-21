#include<iostream>
using namespace std;
class X
{
	private:
		int datax;
	public:
		X()
		{
			datax=101;
		}
		void display_X()
		{
			cout<<"\ndata from internal function data:"<<datax;
		}
		friend class outsider;
};

class outsider
{
	public:
		void inside_job(X &obj)
		{
			cout<<"\naccessed from outsider:"<<obj.datax;
		}

};

int main()
{
	X objx;
	objx.display_X();
	outsider objy;
	objy.inside_job(objx);
}