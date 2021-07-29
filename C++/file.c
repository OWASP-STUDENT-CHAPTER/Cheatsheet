#include<stdio.h>
struct student
{
    char name[15];
    int marks;
};

int main()
{
    int n;
    
    printf("Enter n\n");
    scanf("%d",&n);
    struct student s;
    FILE *f1;
    f1=fopen("student.txt","w");
    for(int i=0;i<n;i++)
    {
        scanf("%s",s.name);
        scanf("%d",&s.marks);
        fprintf(f1,"%s %d\n",s.name,s.marks);
    }
    
    fclose(f1);
    return 0;
}