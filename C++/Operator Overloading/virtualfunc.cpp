// polymorphism
//compile time(static/early binding): function overloading & operator overloading
//run time(dynamic/late binding): function overriding-> virtual functions
#include<iostream>
using namespace std;
class base
{
	protected:
	float i;
	public:
	virtual void convert(float f)
	{
		cout<<"in base class\n";
	}
	//virtual void convert(float f)=0; -?pure virtual function
	// a class with only a pure virtual function is abstract class
};
class Distance:public base
{
	public:
	void convert(float f)
	{
		i=f;
		cout<<"Converting km to m:\n";
		cout<<i<<"km = "<<i*1000<<"m"<<endl;
	}
};
class currency:public base
{
	public:
	void convert(float f)
	{
		i=f;
		cout<<"Converting INR to USD:\n";
		cout<<i<<" INR = "<<i/73<<" USD\n";
	}
};
class ex:public base
{
};
int main()
{
	base *b;
	Distance a;
	currency c;
	ex e;
	b=&a;
	b->convert(2.3);
	b=&c;
	b->convert(450);
	b=&e;
	b->convert(5.6);
	return 0;
}
