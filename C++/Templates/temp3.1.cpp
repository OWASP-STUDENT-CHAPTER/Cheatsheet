//overloading function templates-> explicit specialization
#include<iostream>
using namespace std;
template<class T>
void swapy(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"In template func"<<endl;
}
void swapy(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"In overloaded func"<<endl;
}
int main()
{
	int x=2,y=3;
	char a='a',b='b';
	float i=1.1,j=2.2;
	cout<<"Intergers x,y= "<<x<<" "<<y<<endl;
	cout<<"Char a,b= "<<a<<" "<<b<<endl;
	cout<<"Float i,j= "<<i<<" "<<j<<endl;
	cout<<"on swapping\n";
	swapy(x,y); //overloaded
	swapy(a,b); //template
	swapy(i,j); //template
	cout<<"Intergers x,y= "<<x<<" "<<y<<endl;
	cout<<"Char a,b= "<<a<<" "<<b<<endl;
	cout<<"Float i,j= "<<i<<" "<<j<<endl;
	return 0;
}
