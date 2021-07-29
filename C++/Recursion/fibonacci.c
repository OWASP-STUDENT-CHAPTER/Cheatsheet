#include<stdio.h>
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int i,j;
	int c=0;
	printf("Enter no. : ");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		printf("%d ",fib(c));
		c++;
	}
	return 0;
}

