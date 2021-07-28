#include <iostream>  
using namespace std;  
class B;
class A  
{  
    int x =5;  
    friend class B;    
    friend void add(A, B);       
};  
class B  
{  
    int y =10;
  public:  
    void display(A a)  
    {  
        cout<<"value of x is : "<<a.x<<endl;  
    }  
    friend void add(A, B); 
}; 
void add(A o1, B o2)
{
    cout << "SUM =" << o1.x + o2.y;
}
int main()  
{  
    A a;  
    B b;  
    b.display(a); 
    add(a,b); 
    return 0;  
}  