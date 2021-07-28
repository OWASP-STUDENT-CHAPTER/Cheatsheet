#include <stdio.h>
int main(void){
    char a[30];
    scanf("[^\n]%c", a);
    printf("%s", a);
    return 0;
}
