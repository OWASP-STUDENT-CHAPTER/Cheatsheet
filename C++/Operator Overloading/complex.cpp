#include<iostream>
using namespace std;
class complex
{
	float i,r;
	public:
	complex(float a=0,float b=0)
	{
		r=a;
		i=b;
	}
	void out()
	{
		cout<<r<<" + i"<<i<<endl;
	}
	complex operator+(complex const &x)
	{
		complex c;
		c.r= r+ x.r;
		c.i= i+ x.i;
		return c;
	}
	complex operator-(complex const &x)
	{
		complex c;
		c.r= r- x.r;
		c.i= i- x.i;
		return c;
	}
	complex operator*(complex const &x)
	{
		complex c;
		float a,b;
		a= r * x.r;
		b= i * x.i;
		c.r= a-b;
		a=r * x.i;
		b=i * x.r;
		c.i= a+b;
		return c;
	}
};
int main()
{
	complex a(2.3,7.8),b(8.3,-5.6);
	complex c;
	cout<<"A= ";
	a.out();
	cout<<"B= ";
	b.out();
	c=a+b;
	cout<<"On adding= ";
	c.out();
	c=a-b;
	cout<<"On subtracting= ";
	c.out();
	c=a*b;
	cout<<"On multiplying= ";
	c.out();
	return 0;
}
