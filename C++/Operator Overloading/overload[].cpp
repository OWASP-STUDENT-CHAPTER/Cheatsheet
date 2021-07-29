//overloading []- useful for index out of bound check
#include<iostream>
using namespace std;
class array
{
	int *ptr,s;
	public:
	array(int p[],int a)
	{
		s=a;
		ptr= new int(a);
		for(int i=0;i<s;i++)
			ptr[i]=p[i];
	}
	int& operator[](int i)
	{
		if(i>s)
		{
			cout<<"Array out of bound "<<endl;
			exit(0);
		}
		else 
			cout<<"Value at "<<i<<" changed"<<endl;
		return ptr[i];
	}
	void out()
	{
		cout<<"Entered array: ";
		for(int i=0;i<s;i++)
		{
			cout<<ptr[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	int a[]={1,2,3,4,5};
	array x(a,5);
	x.out();
	x[3]=9;
	x.out();
	x[7]=0;
	return 0;
}
