#include<iostream>
using namespace std;

class complex
{
	private:
		int real,imag;
	public:
		void set_f(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
			cout<<"\ncomplex number              :"<<real<<" + "<<imag<<"i";
		}
		void display()
		{
			cout<<"\ntotal complex number        :"<<real<<" + "<<imag<<"i";
		}
		friend complex operator+(complex &obji,complex &objf);
};

complex operator+(complex &obji,complex &objf)
		{
			complex objt;
			objt.real=obji.real + objf.real;
			objt.imag=obji.imag + objf.imag;
		    //cout<<"\ntotal of all complex :"<<real<<" + "<<img<<"i";
		    return(objt);
		}


int main()
{
	/*int real1,real2,img1,img2;
	cout<<"Enter first real and imag number : ";
	cin>>real1>>img1;
	
	cout<<"Enter second real and imag number: ";
	cin>>real2>>img2;*/
	
	complex obji;
	complex objf;
	complex objz;
	
	obji.set_f(5,6);
	objf.set_f(5,6);
	cout<<"\n------------------------------------";
	objz=obji+objf;
	objz.display();

}