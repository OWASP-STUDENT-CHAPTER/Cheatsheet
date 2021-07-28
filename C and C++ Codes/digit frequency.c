#include <stdio.h>
#include <string.h>
int main(void){
    int freq[10], len, i, j, sum=0;
    char str[1000], r='0';
    scanf("%s", str);
    len = strlen(str);
    for(j=0; j<=9; j++){
	    for(i=0; i<len; i++){
	    	if(str[i]==r){
	    		sum++;
			}
		}	
		printf("%d ", sum);
		sum = 0;
		r++;
	}
    return 0;
}
