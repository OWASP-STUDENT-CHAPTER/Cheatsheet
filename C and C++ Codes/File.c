#include <stdio.h>
int main(void){
	FILE *fp;
	fp = fopen("copy.txt", "r");
	char c;
	int count=0;
	c = fgetc(fp);
	while(c != EOF){
		if(c == '\n'){
			count++;
		}
		c = fgetc(fp);
	}
	printf("%d", count);
	return 0;
}
