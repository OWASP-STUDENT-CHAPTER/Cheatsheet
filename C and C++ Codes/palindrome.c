//palindrome
#include <stdio.h>
int main(void){
    char word[100];
    int i=0, j, sum=0;
    printf("Enter a string\n"); scanf("%s", word);
    while(word[i] != '\0'){
        i++;
    }
    for(j=0; j<i-1; j++){
        if(word[j] == word[i-j-1]){
            sum++;
        }else break;
    }
    if(sum == i-1){
        printf("%s is a palindrome", word);
    }else printf("%s is not a palindrome", word);
    return 0;
}
