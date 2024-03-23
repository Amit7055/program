/*
4. Create a C++ base class Shape. Derive three different classes Circle, Sphere and Cylinder from shape class. 
Write a C++ program to calculate area of Circle, Sphere and Cylinder. (pure virtual function)
*/

#include<iostream>
using namespace std;

class Shape
{
	protected:
		public:
			virtual void get_info()=0;
			virtual void display()=0;
};
class Circle  :public Shape
{
	private:
		float r,area;
	public:
		void get_info()
		{
			cout<<"Enter radius of circle : ";
			cin>>r;
			area=3.14*r*r;
		}
		void display()
		{
			cout<<"Area of the Circle : "<<area<<endl;
		}
};
class Sphere  :public Shape
{
	private:
		float r,area;
	public:
		void get_info()
		{
			cout<<"Enter radius of Sphere : ";
			cin>>r;
			area=4*3.14*r*r;;
		}
		void display()
		{
			cout<<"Area of the Sphere : "<<area<<endl;
		}
};
class Cylinder  :public Shape
{
	private:
		float r,h,area;
	public:
		void get_info()
		{
			cout<<"Enter radius of Cylinder : ";
			cin>>r;
			cout<<"Enter height of Cylinder : ";
			cin>>h;
			area=(2*3.14*r*h)+(2*3.14*r*r);//2prh+2pr2
		}
		void display()
		{
			cout<<"Area of the Cylinder : "<<area<<endl;
		}
};

main()
{
	int ch;
	
	do
	{
		cout<<"1.Area of the Circle\n2.Area of the Sphere\n3.Area of the Cylinder\n0.Exit\n: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
				    Circle c;
					c.get_info();
					c.display();
				}
				break;
			case 2:
				{
					Sphere s;
					s.get_info();
					s.display();
				}
				break;
			case 3:
				{
					Cylinder cy;
					cy.get_info();
					cy.display();
				}
				break;
			case 0:
				cout<<"THANK_YOU......................................";
			default :
				cout<<"INVALID_CHOICE\n";
		}
	}while(ch!=0);
}