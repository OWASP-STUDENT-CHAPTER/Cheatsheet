//calculator using switch statement
#include <stdio.h>
int main(void){
    int num1, num2, oper;
    printf("Enter the first value :\n"); scanf("%d", &num1);
    printf("Enter the second value :\n"); scanf("%d", &num2);
    printf("Enter the choice from the menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"); scanf("%d", &oper);
    switch(oper){
        case 1: printf("The value after Addition is %d.", num1+num2); break;
        case 2: printf("The value after Subtraction is %d.", num1-num2); break;
        case 3: printf("The value after Multiplication is %d.", num1*num2); break;
        case 4: printf("The value after Division is %d.", num1/num2); break;
    }
    return 0;
}
