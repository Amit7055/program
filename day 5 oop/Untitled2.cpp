#include<iostream>
using namespace std;
class A
{
	public:
		A(int n1)
		{
			cout<<"\nConstructor:A here"<<n1;
		}
};
class B:public A
{
	public:
		B(int n1,int n2):A(n1)
		{
			cout<<"\nConstructor:B here"<<n2;
		}
};
class C:public B
{
	public:
		C(int n1,int n2,int n3):B(n1,n2)
		{
			cout<<"\nConstructor:C here"<<n2;
		}
};
int main()
{
	C objc(10,100,1000);
}