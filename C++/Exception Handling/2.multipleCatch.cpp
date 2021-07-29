//multiple catches
#include<iostream>
using namespace std;
void f(int x) // multiple catches
{
	try
	{
		if(x)
			throw x;
		else
			throw "Given integer is 0";	
	}
	catch(int i)
	{
		cout<<"Caught an int: "<<i<<endl;
	}
	catch(const char *s)
	{
		cout<<"Caught a string: "<<s<<endl;
	}
}
void f2(int x) //catching all types of exceptions
{
	try
	{
		if(x==0)
			throw x; //int
		else if(x==1)
			throw 'c'; //char
		else
			throw 69.69; //double
	}
	catch(int y)
	{
		cout<<"Caught an int: "<<y<<endl;
	}
	catch(...) //catches all exceptions, irregardless of datatype thrown 
	{
		cout<<"Caught one!"<<endl;
	}
}
int main()
{
	f(2);
	f(0);
	f(69);
	f2(0);
	f2(1);
	f2(69);
	return 0;
}
