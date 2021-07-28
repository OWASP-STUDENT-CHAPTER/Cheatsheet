//string sorting (alphabetical oreder)
#include <stdio.h>
int main(void){
    char word[21], swap;
    int len, i, j;
    printf("Enter the input string\n"); scanf("%s", word);
    while(word[len] != '\0'){
        len++;
    }
    len = len-1;
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            if(word[j] > word[j+1]){
                swap = word[j+1];
                word[j+1] = word[j];
                word[j] = swap;
            }
        }
    }
    printf("The output string is %s", word);
    return 0;
}
