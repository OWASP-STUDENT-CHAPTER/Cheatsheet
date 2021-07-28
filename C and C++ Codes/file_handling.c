#include <stdio.h>
int main(void){
	FILE *fp;
	int len = 0;
	char c;
	fp = fopen("hello.text", "r");
	c=fgetc(fp);
	while(c != EOF){
		len++;
		printf("%c", c);
		c=fgetc(fp);
	}
	fclose(fp);
	printf("%d", len);
	return 0;
}
