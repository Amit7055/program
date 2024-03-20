#include<iostream>
#include<string>
using namespace std;
class Circle
{
 private:
 	float r;
 public:
 	void set_radius(float r)
 	{
 		this->r=r;
 		cout<<"radius set to "<<r;
	 }
	 
	 void display_area()
	 {
	 	cout<<"\nArea of circle is "<<r*r*3.14<<"cm";
	 }
};
int main()
{
	Circle c;
	float r;
	cout<<"\n1 Enter radius:";
	cin>>r;
	c.set_radius(r);
	c.display_area();
	cout<<"\n2 Enter radius:";
	cin>>r;
	c.set_radius(r);
	c.display_area();
	cout<<"\n3 Enter radius:";
	cin>>r;
	c.set_radius(r);
	c.display_area();

	return 0;
}