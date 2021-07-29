// Exception:Error
/*Synchronus exceptions-> out of range index
					 -> overflow*/
/*Mechanism:
	Try:
		1. Hit the exception (finding problem)
		2. Throw exception (informing about the error)
	Catch:
		3. Catch exception (reciving the error)
		4. Handle the exception
*/
// if nothing is thrown from the try block, the catch block is skipped
// throw point: place where exception occured; control cannot return to throw point

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try 
	{
		cout<<"Enter a: ";
		cin>>a;
		cout<<"Enter b: ";
		cin>>b;
		throw b;
	}
	catch(int x)
	{
		if(x==0)
			cout<<"Invalid operation, denominator is 0";
	}
	cout<<"The quotient is "<<a/b;
	return 0;
}
