//string and array (various functions)
#include <stdio.h>

int len(char []);
void rev(char [], int);
void compare(char [], char [], int);

int main(void){
    char word1[100], word2[100];
    int leng1, leng2;
    scanf("%s%s", word1, word2);
    printf("Length of the first string is "); leng1 = len(word1);
    printf("\nLength of the second string is "); leng2 = len(word2);
    printf("\nThe reverse of the first string is "); rev(word1, leng1);
    printf("\nThe reverse of the second string is "); rev(word2, leng2);
    printf("\nThe concatenated string is %s%s\n", word1, word2);
    if(leng1<leng2){
        compare(word1, word2, leng2);
    }else compare(word1, word2, leng1);
    return 0;
}

int len(char word[]){
    int i=0;
    while(word[i] != '\0'){
        i++;
    }
    printf("%d", i);
    return i;
}

void rev(char word[], int leng){
    int i=0;
    for(i=leng-1; i>=0; i--){
        printf("%c", word[i]);
    }
}

void compare(char word1[], char word2[], int leng){
    int i=0;
    for(i=0; i<leng; i++){
        if(word1[i] > word2[i]){
            printf("%s appears before %s", word2, word1); break;
        }else if(word1[i] < word2[i]){
            printf("%s appears before %s", word1, word2); break;
        }
    }
    if(i == leng){
        printf("Both the inputs are same");
    }
}
