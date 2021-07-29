#include<stdio.h>
struct student
{
    int roll_number;
    char name[20];
    float marks;
    char grade;
};
int main()
{
    int i;
    struct student s[10];
    for(i=0;i<5;i++)
    {
        scanf("%d %s %f %c",&s[i].roll_number,s[i].name,&s[i].marks,&s[i].grade);
    }
    printf("enter roll number to be searched:\n");
    int r,flag=0;
    scanf("%d",&r);
    for(i=0;i<5;i++)
    {
        if(s[i].roll_number==r)
        {
            flag=1;
            printf("%d %s %.2f %c",s[i].roll_number,s[i].name,s[i].marks,s[i].grade);
            break;
        }
    }
    if(flag==0)
    printf("Students gand mara raha hai ;) L bc");
    return 0;
}