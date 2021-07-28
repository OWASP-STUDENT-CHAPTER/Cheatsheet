#include<stdio.h>
int main(){
 enum days {a, b=5, c, d, e};
 printf("%d, %d, %d, %d, %d", a, b, c, d, e);
 return 0;
} 
