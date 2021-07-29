#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;

int main()
{
    int ch;
    char x,choice='y';
    ifstream f1;
    ofstream f2;
    string text;
    // cout<<"Enter content to be written in file:\n";
    // getline(cin,text);
    do{
        cout<<"\t\tFile Menu\n\n";
        cout<<"1.Create Text1.txt\n";
        cout<<"2.Lowercase cotents of Text1.txt and copy to Text2.txt\n\n";
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: f2.open("Text1.txt");
                    cout<<"Enter content to be written in file:\n";
                    cin.ignore();
                    do
                    {
                        cin.get(x);
                        f2.put(x);

                    }while(x!='\n');
                    f2.close();
                    f1.open("Text1.txt");
                    while(!f1.eof())
                    {
                        f1.get(x);
                        cout<<x;
                    }
                    f1.close();
                    cout<<endl<<endl;
                    break;
            case 2: f1.open("Text1.txt");
                    f2.open("Text2.txt");

                    do
                    {
                        f1.get(x);
                        x=tolower(x);
                        f2.put(x);
                    } while (!f1.eof());

                    f1.close();
                    f2.close();
                    f1.open("Text2.txt");
                    do
                    {
                        f1.get(x);
                        cout<<x;
                    } while (!f1.eof());
                    break;
        }
        cout<<"Repeat menu? (y/n): ";
        cin>>choice;
    }while(choice=='y'||choice=='Y');
    return 0;

}