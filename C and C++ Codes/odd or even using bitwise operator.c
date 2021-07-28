//determine odd or even using bitwise operator
//if the number is even it would be having 0 at the end in the bunary form and if the number is odd then that would be having 1 at the end in the binary form.
#include <stdio.h>
int main(void){
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if(num & 1){ //if ans is 1 i.e. the if statement becomes true and it gets executed or if ans is 0, if statment becomes false and else statement gets executed.
        printf("Odd");
    }else printf("Even");
    return 0;
}
