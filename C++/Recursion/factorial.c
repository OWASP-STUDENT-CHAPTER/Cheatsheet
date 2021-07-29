#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int a,b;
	//long long int b;
	printf("Enter a no. : ");
	scanf("%d",&a);
	b=fact(a);
	printf("Factorial of given no. = %d",b);
	return 0;
}

