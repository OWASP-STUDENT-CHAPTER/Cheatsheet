//celsius to fahrenheit 
#include <stdio.h>
int main(void){
    int cel;
    double feh=0.0;
    printf("Temparature in Celsius:\n"); scanf("%d", &cel);
    feh = (cel*1.8) + 32;
    printf("Temparature in Fahrenheit is %.1lfF", feh);
    return 0;
}
