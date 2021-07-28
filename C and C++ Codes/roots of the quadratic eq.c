//roots of the quadratic eq
#include <stdio.h>
#include <math.h>
int main(void){
    int a, b, c;
    double D=0.0, root1 = 0.0, root2 = 0.0;
    printf("Enter the values of a,b,c :\n"); scanf("%d%d%d", &a, &b, &c);
    D = sqrt(b*b - (4*a*c));
    root1 = (-b + D)/(2*a);
    root2 = (-b - D)/(2*a);
    printf("The roots are:\nroot1 = %.1lf\nroot2 = %.1lf", root1, root2);
    return 0;
}
