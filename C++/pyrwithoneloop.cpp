#include<iostream>
using namespace std;

int main()
{
    int i,j,n=5, star_count;

    star_count=0;
    for(i=1;i<=n;)
    {
        
        if(star_count<i)
        {
            cout<<"* ";
            star_count++;
            continue;
        }        
        if(star_count==i){
            cout<<endl;
            star_count=0;
            i++;
        }
    
    }
    return 0;
}