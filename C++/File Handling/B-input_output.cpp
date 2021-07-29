// input and output using ifstream & ofstream
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char c;
	ifstream f("one.txt");
	if(!f)
	{
		cout<<"File doen't exist";
		return 0;		
	}
	else
	{
		while(!f.eof())
		{
			f.get(c);
			cout<<c;
		}
	}
	f.close();
	ofstream f2("one_output.txt");
	f2<<"Writing into a text file using cpp";
	f2.close();
	return 0;
}
