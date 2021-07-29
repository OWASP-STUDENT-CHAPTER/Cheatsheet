// Non-type parameter
#include<iostream>
using namespace std;
template <class T>
void disp(T x,int a)
{
	for(;a;a--) // no. of tabs
	{
		for(int i=0;i<4;i++) //tab= 4 spaces
			cout<<" ";
	}
	cout<<x<<endl; // displaying x
}
int main()
{
	disp("This is a sample of non-type parameter",0);
	disp(120,1);
	disp('a',2);
	disp(88.345,3);
	return 0;
}
