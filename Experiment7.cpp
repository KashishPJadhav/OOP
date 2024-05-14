#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
	int a,b;
	public:
		Complex operator +(Complex&);
		Complex operator -(Complex&);
		void seta(int);
		void setb(int);
		int geta();
		int getb();
		void disp();
};
void Complex::seta(int a)
{
	this->a=a;
}
void Complex::setb(int b)
{
	this->b=b;
}
int Complex::geta()
{
	return a;
}
int Complex::getb()
{
	return b;
}
Complex Complex::operator +(Complex& c)
{
	Complex r;
	r.a=a+c.a;
	r.b=b+c.b;
	return r;
}
Complex Complex::operator -(Complex& c)
{
	Complex r;
	r.a=a-c.a;
	r.b=b-c.b;
	return r;
}
void Complex::disp()
{
	cout<<geta()<<"+ i"<<getb()<<endl;
}
int main()
{
	Complex a,b,c;
	cout<<"\nEnter real : ";
	int a1;
	cin>>a1;
	a.seta(a1);
	cout<<"\nEnter imaginary : ";
	int b1;
	cin>>b1;
	a.setb(b1);
	
	cout<<"\nEnter real : ";
	cin>>a1;
	b.seta(a1);
	cout<<"\nEnter imaginary : ";
	cin>>b1;
	b.setb(b1);
	a.disp();
	b.disp();
	c=a+b;
	cout<<"\nAfter Add : ";
	c.disp();
	c=a-b;
	cout<<"\nAfter Sub : ";
	c.disp();
	
}
