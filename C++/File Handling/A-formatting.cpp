//formatting outputs
#include<iostream>
using namespace std;
int main()
{
	cout<<showpos<<10.2345<<endl;//shows positive '+' no.
	cout.precision(4); // sets the precision to 4 digits-integer+fractional
	cout<<-12.34567<<endl; //output= -12.35 after rounding off
	cout.width(5); //gap of 5 spaces
 	cout<<'c';
	return 0;
}
