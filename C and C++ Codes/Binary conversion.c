#include <stdio.h>
int main(void){
    int y=0, Remainder[1000], i=0, j=0, x=0, a[1000], k=0, l=0;  //a is used on behalf of carry forward
    double input=0, z=0, point=0;
    printf("Enter a decimal number\n");
    scanf("%lf", &input);
    x = (int)input;  //integer part
    z = input - x;  //decimal part
    point = z;
    while(x != 0){
        y = x/2;
        Remainder[i] = x%2;
        i++;
        x = y;
    }
    while(z != 0){
        z = z*2;
        a[k] = (int)z;
        z = z - a[k];
        k++;
    }
    printf("Yor Number in Binary form is ");
    for(j=i-1;j>=0 ; j--){
        printf("%d", Remainder[j]);
    }
    if (point != 0){
     printf(".");
	}
    for(l=0; l<k; l++){
        printf("%d", a[l]);
    }
    return 0;
}
