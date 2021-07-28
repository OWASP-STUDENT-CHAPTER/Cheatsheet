//Calculator
#include<stdio.h>
#include<math.h>

int addition(int, int);
int subtraction(int,int);
int multiplication(int, int);
float division(int, int);
int modulo(int, int);
int power(int, int);
float average(int, int);

int main(void){
    int num1, num2, oper;
    scanf("%d%d%d", &num1, &num2, &oper);
    switch(oper){
        case 1: printf("%d", addition(num1, num2)); break;
        case 2: printf("%d", subtraction(num1, num2)); break;
        case 3: printf("%d", multiplication(num1, num2)); break;
        case 4: printf("%.2f", division(num1, num2)); break;
        case 5: printf("%d", modulo(num1, num2)); break;
        case 6: printf("%.2f", average(num1, num2)); break;
        case 7: printf("%d", power(num1, num2)); break;
    }
    return 0;
}

int addition(int a, int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
float division(int a, int b){
    return ((1.0)*a)/b;
}
int modulo(int a, int b){
    return a%b;
}
int power(int a, int b){
    return pow(a, b);
}
float average(int a, int b){
    return addition(a,b)/2.0;
}
