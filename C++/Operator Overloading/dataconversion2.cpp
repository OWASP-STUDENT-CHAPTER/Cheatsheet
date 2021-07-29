// User-Defined datatype conversion to another User-Defined datatype
#include<iostream>
#include<math.h>
using namespace std;
class cartesian
{
	float x,y;
	public:
	cartesian(float a=0,float b=0)
	{
		x=a;
		y=b;	
	}
	void out()
	{
		cout<<x<<","<<y<<endl;
	}
};
class polar
{
	float r,a;
	public:
	polar(float x=0,float y=0)
	{
		r=x;
		a=y;
	}
	operator cartesian()
	{
		float x= r* cos(a);
		float y= r* sin(a);
		return cartesian(x,y);
	}
	void out()
	{
		cout<<r<<","<<a<<endl;
	}
};
int main()
{
	polar p(10.0,0.78);
	cout<<"Polar coordinates: ";
	p.out();
	cartesian c=p;
	cout<<"Cartesian coordinates: ";
	c.out();
	return 0;
}
