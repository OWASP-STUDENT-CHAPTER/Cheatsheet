// reading and writing simuntaneusly

/*ios::in/out are called flags
ios::ate-> opens file for read/write and moves the control to the end of file
file pointers: get and put: like book marks
tell: examine the location; seek: set the bookmark*/

/*get:current location while reading
seekg(),tellg(): set and examine get pointer*/

/*put:current position while file writing
seekp(),tellp(): set and examine put point*/

/*Flags to use:
seekg(3,ios::beg)-> 3 bytes from beginning of file
seekg(-2,ios::cur)-> 2 bytes before current location
seekg(-5,ios::end)-> back up 5 bytes from end*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string c;
	fstream f("two.txt",ios::out|ios::in);
	f<<"New file created";
	f.seekg(0,ios::beg);
	while(!f.eof())
	{
		getline(f,c);
		cout<<c;	
	}
	f.close();
	return 0;
}
