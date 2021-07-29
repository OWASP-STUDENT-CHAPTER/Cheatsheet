//class templates
#include<iostream>
using namespace std;
template<class T>
class test
{
	T i,j;
	public:
	test(T a,T b)
	{
		i=a;
		j=b;
	}
	T sum()
	{
		return i+j;
	}
};
int main()
{
	test <int>a(7,4);
	test <float>b(3.4,7.88);
	cout<<"Class a sum: "<<a.sum()<<endl;
	cout<<"Class b sum: "<<b.sum()<<endl;
	return 0;
}
