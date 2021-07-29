#include<stdio.h>
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return n+sum(n-1);
}
int main()
{
	int a,b;
	//long long int b;
	printf("Enter a no. : ");
	scanf("%d",&a);
	b=sum(a);
	printf("Summation of given no. = %d",b);
	return 0;
}

