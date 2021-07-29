#include<iostream>
using namespace std;
template<class T> // T is typename: like a new datatype
T maxy(T a,T b)
{
	return a>b?a:b;
}
template<class T1, class T2>
float sum(T1 a,T2 b)
{
	return a+b;
}
int main()
{
	cout<<maxy(33,54)<<endl;
	cout<<maxy('n','s')<<endl;
	cout<<maxy(5.6,-2.3)<<endl;
	cout<<sum(8,2)<<endl;
	cout<<sum(8.44,2)<<endl;
	return 0;
}
