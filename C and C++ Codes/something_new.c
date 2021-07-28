#include <stdio.h>
#include <stdlib.h> //for atoi, atof etc. functions  
int main () {
   char str[10]="-3.123";  // initialise string
   //puts("enter a real number - "); gets(str);
   printf("\nString value = %s",str);
   printf("\nFloat value = %f",atof(str)); //atof: string-float
   printf("\nInt value = %d",atoi(str)); // atoi: string - int
   printf("\nLong val = %ld",atol(str)); //atol: string - long
   
   // int/long into string (binary, octal, decimal, hexadecimal)
   
   char st[50]; // allocate me memory for 50 char
   int i=13; long l=999999; 
   printf("\nString  = %s",itoa(i, st, 10));  //int,str,base (10 for decimal)
   printf("\nString  = %s",ltoa(l, st, 2));  //int,str,base  (2 for binary) 
   return 0;
}

