//basic to User-Defined datatype conversion
// done by using constructor and the basic type as its argument
#include<iostream>
using namespace std;
class temp
{
	float c;
	public:
	temp()
	{
		c=0;
	}
	temp(float f)
	{
		c=(f-32)*5/9;
	}
	void out()
	{
		cout<<c<<endl;
	}
};
int main()
{
	temp c(50.0);
	cout<<"Temperature in cel for 50F: ";
	c.out();
	float f;
	cout<<"Enter in Fahrenheit: ";
	cin>>f;
	c=f; // calls contructor
	cout<<"Temperature in cel for "<<f<<"F: ";
	c.out();
	return 0;
}
