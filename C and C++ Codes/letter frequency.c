#include <stdio.h>
int leng(char []);
int main(void){
    char word[200], swap;
    int len=0, i, j, sum[200], k, l;
    printf("Enter the input string\n"); scanf("%s", word);
    //lenght of the string
    len = leng(word);
    //alphabetical order
    for(i=0; i<len-1; i++){
        for(j=0; j<len-1; j++){
            if(word[j]>word[j+1]){
                swap = word[j];
                word[j] = word[j+1];
                word[j+1] = swap;
            }
        }
    }
    //initialising sum[]
    for(i=0; i<len; i++){
        sum[i] = 1;
    }
    //comparing the letters
    for(i=0; i<len-1; i++){
        int j=1;
        while(word[i] == word[j+i]){
            j++;
            sum[i] += 1;
        }
        if(j>1){
            for(l=0; l<j-1; l++){ //deleting the repeated characters
                for(k=i+1; k<len; k++){
                    word[k] = word[k+1];
                    sum[k] = sum[k+1];
                }
            }
            len = leng(word);
        }
    }
    //printing
    printf("The letter frequency is\n");
    for(i=0; i<len; i++){
        printf("%c %d\n", word[i], sum[i]);
    }
    return 0;
}

int leng(char word[]){
    int len=0;
    while(word[len] != '\0'){
        len++;
    }
    return len;
}
