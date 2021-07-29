#include<stdio.h>
int main()
{
    int low=1,high=100,mid;
    char ch='a';
    while(ch!='=')
    {
        mid=(low+high)/2;
        printf("Is it %d ?",mid);
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='<')
        high=mid-1;
        else if(ch=='>')
        low=mid+1;
        else
        break;
    }
    return 0;
}


