/*
1.
 Write a c++ program to find volume of cylinder, cone and sphere. (Use function overloading)
 Cylinder = pr2h
 Cone = pr2h/3
 Sphere = 4/3pr3
*/

#include<iostream>
using namespace std;

class volume
{
	private:
		
	public:
		void area(float radius)
		{
			cout<<"\nVolume of Sphere is : "<<(4*3.14*radius*radius*radius)/3;
		}
		void area(float radius,float height)
		{
			cout<<"\nVolume of Cone is : "<<(3.14*radius*radius*height)/3;
		}
		void area(double radius,double height)
		{
			cout<<"\nVolume of Cylinder is : "<<3.14*radius*radius*height;
		}
};

int main()
{
	int ch;
	do
	{
		cout<<"\nEnter choice:";
	    cout<<"\n1.Volume of Sphere\n2.Volume of Cone\n3.Volume of Cylinder\n0.Exit\n:";
	    cin>>ch;
	
	    switch(ch)
	    {
		    case 1:
			    float r;
			    cout<<"Enter radius for sphere: ";
			    cin>>r;
			    volume v;
			    v.area(r);
			    break;
		    case 2:
			    float h;
			    cout<<"Enter radius and height for Cone: ";
			    cin>>r>>h;
			    //volume v1;
			    v.area(r,h);
			    break;
		    case 3:
			    double ra,he;
			    cout<<"Enter radius and height for Cylinder: ";
			    cin>>ra>>he;
			    //volume v2;
			    v.area(ra,he);
			case 0:
				cout<<"Thanks for vist................";
			default:
				cout<<"Invalid choice:";
	    }
	
			
	}
	while(ch!=0);
	return 0;
}