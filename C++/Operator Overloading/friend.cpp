// overloading using friend function
#include<iostream>
using namespace std;
class test
{
	int i;
	public:
	test(int o=0)
	{
		i=o;
	}
	void out()
	{
		cout<<i;
	}
	friend void operator-(test &b);
};
void operator-(test &b)
{
	b.i= -b.i;
}
int main()
{
	test a(8);
	-a;
	a.out();
	return 0;
}
