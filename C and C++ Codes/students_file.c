#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[100];
    int marks;
};

int main(){
    int num, i;
    scanf("%d", &num);
    struct student *n;
    n = (struct student *)malloc(num*sizeof(struct student));
    for(i=0; i<num; i++){
        printf("Enter Details of student %d\n", i+1);
        printf("Name\n");
        scanf("%s", (n+i)->name);
        printf("Marks\n");
        scanf("%d", &(n+i)->marks);
    }
    FILE *fp;
    fp = fopen("student.txt", "w");
    for(i=0; i<num; i++){
    	fprintf("Details of student %d\n", i+1);
    	fprintf("%s %d", *(n+i).name, *(n+i).marks);
	}
	fclose(fp);
    return 0;
}
