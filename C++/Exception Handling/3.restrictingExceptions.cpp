//restricting exception
// only certain datatypes are allowed to be thrown
// if unspecified datatypes are encountered, the function terminates

#include<iostream>
using namespace std;
void f(int x) throw(int,double) //only allows int and double to be thrown- char and string will be skipped
{
	if(x==0)
		throw 2; //int
	else if(x==1)
		throw 'k'; //char
	else if(x==2)
		throw 7.89; //double
	else
		throw "a string"; //string
}
// if we use throw()-> no datatype will be thrown 
int main()
{
	try
	{
		f(1);
	}
	catch(int a)
	{
		cout<<"Caught int: "<<a<<endl;
	}
	catch(char a)
	{
		cout<<"Caught char: "<<a<<endl;
	}
	catch(double a)
	{
		cout<<"Caught double: "<<a<<endl;
	}
	catch(const char *a)
	{
		cout<<"Caught string: "<<a<<endl;
	}
}
