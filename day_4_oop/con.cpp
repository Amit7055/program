#include<iostream>
#include<string>
using namespace std;
class adder
{
	private:
		int c;
	public:
		adder(int a ,int b)
		{
			cout<<"\nn1 = "<<a;
			cout<<"\nn2 = "<<b;
			c=a+b;
			cout<<"\n"<<c;
		}
		adder(int a ,int b,int z)
		{
			cout<<"\nn1 = "<<a;
			cout<<"\nn2 = "<<b;
			cout<<"\nn3 = "<<z;
			c=a+b+z;
		}
		adder(int a ,int b,int z, int y)
		{
			cout<<"\nn1 = "<<a;
			cout<<"\nn2 = "<<b;
			cout<<"\nn3 = "<<z;
			cout<<"\nn4 = "<<y;
			c=a+b+z+y;
		}
		
		void display()
		{
			cout<<"\nTotal = "<<c;
		}
		
};

int main()
{
	int n1,n2,n3,n4;
	cout<<"enter 4 number:";
	cin>>n1>>n2>>n3>>n4;
	
	adder a(n1,n2);
	a.display();
	
	adder a1(n1,n2,n3);
	a1.display();
	
	adder a2(n1,n2,n3,n4);
	a2.display();
	
	adder a3(n3,n4);
	a.display();
	
	return 0;
}