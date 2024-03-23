/*
5.Write a C++ program to create two Classes Square and Rectangle. Compare area of both the shapes using friend function. 
Accept appropriate data members for both the classes.
*/

#include<iostream>
using namespace std;
class Rectangle;
class Square
{
	private:
		float side;
		float area;
	public:
		void get_info()
		{
			cout<<"Enter side of Square: ";
			cin>>side;
			area=side*side;
		}
		void display()
		{
			cout<<"Area of Square : "<<area;
		}
		
		friend float comp(Square &s,Rectangle &r);
		
};

class Rectangle
{
	private:
		float lenght,breath,area;
	public:
		void get_info1()
		{
			cout<<"Enter lenght and breath of Rectangle : ";
			cin>>lenght>>breath;
			area=lenght*breath;
		}
		void display2()
		{
			cout<<"Area of Rectangle : "<<area;
		}
		friend float comp(Square &s,Rectangle &r);	
};


float comp(Square &s,Rectangle &r)
{
	if(s.area > r.area)
	{
		return(s.area);
	}
	else
	{
		return(r.area);
	}
}

main()
{
	Square s;
	s.get_info();
	s.display();
	
	Rectangle r;
	r.get_info1();
	r.display2();
	
	cout<<comp(s,r);
}