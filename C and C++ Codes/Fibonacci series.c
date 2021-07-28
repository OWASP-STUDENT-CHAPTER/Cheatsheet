//Fibonacci series
#include <stdio.h>
int fibo(int);
int main(void){
    int n, result=0;
    printf("Enter the value of n\n"); scanf("%d", &n);
    result = fibo(n);
    printf("The term %d in the fibonacci series is %d", n, result);
    return 0;
}

int fibo(int n){
    if(n>2){
        return fibo(n-1)+fibo(n-2);
    }else if(n == 2){
        return 1;
    }else return 0;
}
