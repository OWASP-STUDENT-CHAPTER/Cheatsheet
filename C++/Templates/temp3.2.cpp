#include<iostream>
using namespace std;
template<class T>
void func(T a)
{
	cout<<"In first temp\n";
}
template<class T1,class T2>
void func(T1 a,T2 b)
{
	cout<<"In second temp\n";
}
int main()
{
	func(1);
	func(1,2);
	return 0;
}
