//maximum of 3 numbers
#include <stdio.h>
int findmaximum(int, int, int);
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d is the maximum number", findmaximum(a,b,c));
    return 0;
}

int findmaximum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else return c;
}
