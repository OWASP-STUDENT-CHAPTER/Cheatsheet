//HCF (most efficient method)
#include<stdio.h>
int gcd(int, int);
int main(void){
    int n1, n2, result;
    printf("Enter n1\n"); scanf("%d", &n1);
    printf("Enter n2\n"); scanf("%d", &n2);
    result = gcd(n1, n2);
    printf("G.C.D of %d and %d = %d", n1, n2, result);
    return 0;
}

int gcd(int n1, int n2){
    if(n2==0){
        return n1;
    }
    return gcd(n2, n1%n2);
}
