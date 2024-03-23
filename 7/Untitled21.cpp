#include<iostream>
using namespace std;

class Time
{
	protected:
		int hh,mm,ss;
	public:
		void set(int h,int m,int s)
		{
			hh=h,mm=m,ss=s;
		}
	    void get()
	    {
	    	cout<<"\n"<<hh<<" : "<<mm<<" : "<<ss;
		}
		friend Time operator+(Time t1,Time t2);
};

Time operator+(Time t1,Time t2)
{
	Time t3;
	t3.ss=t1.ss+t2.ss;
	t3.mm=t1.mm+t2.mm+t3.ss/60;
	t3.ss=t3.ss%60;
	t3.hh=t1.hh+t2.hh+t3.mm/60;
	t3.mm=t3.mm%60;
	return t3;
}

main()
{
	Time t1,t2,t3;
	t1.set(2,32,43);
	t1.get();
	t2.set(1,41,23);
	t2.get();
	
	t3=t1+t2;
	t3.get();
}