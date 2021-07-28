//Factorial (A4 Q2)
#include <stdio.h>
int fact(int);
int main(void){
	int n, result;
	printf("Enter a number ");
	scanf("%d", &n);
	result = fact(n);
	printf("%d! = %d", n, result);
	return 0;
}

int fact(int x){
	if(x>=1){
	    return x*fact(x-1);	
	}else return 1;
}
