#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");
   gets(str);
   
   printf("You Entered: ");
   puts(str);

   return(0);
}
