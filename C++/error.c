#include<stdio.h>
#include<math.h>
int main()
{
int oct1,oct2=0,a,b,i=0;
char hex[10];
printf("Enter in octal ");
scanf("%d",&oct1);
b=oct1;
while(b>0)
{
    a=b%10;
    oct2+=a*pow(8,i++);
    b=b/10;
}
printf("decimal equivalent = %d\n",oct2);
b=oct2;
i=0;
while(b>0)
{
    a=b%16;
    if(a<10)
    hex[i++]=48+a;
    else if(a==10)
    hex[i++]='A';
    else if(a==11)
    hex[i++]='B';
    else if(a==12)
    hex[i++]='C';
    else if(a==13)
    hex[i++]='D';
    else if(a==14)
    hex[i++]='E';
    else if(a==15)
    hex[i++]='F';
    b=b/16;
}
printf("In hexadecimal: ");
while(i>-1)
{
    printf("%c",hex[i--]);
}
return 0;
}