//class template non-type parameter
// non-type are restricted to int/ pointer/ reference
// act as constants as their values cannot be changed
#include<iostream>
using namespace std;
template<class T,int n>
class test
{
	T arr[n];
	public:
	void in()
	{
		for(int i=0;i<n;i++)
			cin>>arr[i];
	}
	T sum()
	{
		T s=0;
		for(int i=0;i<n;i++)
			s+=arr[i];
		return s;
	}
};
int main()
{
	test <int,5>a;
	test <float,3>b;
	cout<<"Enter elements in interger class:\n";
	a.in();
	cout<<"Enter elements in float class:\n";
	b.in();
	cout<<"Class a sum: "<<a.sum()<<endl;
	cout<<"Class b sum: "<<b.sum()<<endl;
	return 0;
}
