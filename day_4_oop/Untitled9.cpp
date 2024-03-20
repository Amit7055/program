#include<iostream>
using namespace std;

class shape
{
	public:
		virtual void area()=0;
};
class circle:public shape
{
	private:
		float r;
	public:
	void area()
	{
		int area;
		area=2*3.14*ra;
		cout<<"\narea = "<<area;
	}
	void set_radius(float r)
	{
		this->r=r;
	}

};

class rectrangle:public shape
{
	private:
		float l,b;
	public:
	void area()
	{
		int area;
		area=l*b;
		cout<<"\narea = "<<area;
	}
	void set_side(float l,float b)
	{
		this->l=l;
		this->b=b;
	}

};
int main()
{
	circle c;
	c.set_radius(5.45);
	c.area();
	
	
}
	