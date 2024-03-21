#include<iostream>
using namespace std;
class Inches;
class Feet
{
	private:
		int  f;
	public:
		void set_f(int f)
		{
			this->f=f;
		}
		friend void adder(Inches &obji,Feet objf);
};
class Inches
{
	private:
		int  i;
	public:
		void set_i(int i)
		{
			this->i=i;
		}
		friend void adder(Inches &obji,Feet objf);
};

void adder(Inches &obji,Feet objf)
		{
		 int total;
		 total=objf.f*12+obji.i;
		 cout<<"\ntotal inches = "<<total;
		}


int main()
{
	Inches obji;
	Feet objf;
	obji.set_i(123);
	objf.set_f(27);
	adder(obji,objf);

}