//employee using structures
#include <stdio.h>

struct employee{
    char name[50];
    int employeeid;
    int age;
    char designation[50];
    float salary;
};

void read(struct employee *, int);
void print(struct employee, int);

int main(void){
    struct employee a;
    struct employee b;
    struct employee c;
    struct employee d;
    struct employee e;
    read(&a, 1); 
    read(&b, 2); 
    read(&c, 3); 
    read(&d, 4); 
    read(&e, 5); 
    print(a, 1);
    print(b, 2);
    print(c, 3);
    print(d, 4);
    print(e, 5);
    return 0;
}

void read(struct employee *x, int n){
    printf("Enter details for employee %d\n", n); 
    printf("Enter employee name\n"); scanf("%s", x->name);
    printf("Enter employee id\n"); scanf("%d", &x->employeeid);
    printf("Enter employee age\n"); scanf("%d", &x->age);
    printf("Enter employee designation\n"); scanf("%s", x->designation);
    printf("Enter employee salary\n"); scanf("%f", &x->salary);
    
}

void print(struct employee x, int n){
    printf("Details of employee %d\n", n);
    printf("Employee name:%s\n", x.name);
    printf("Employee id:%d\n", x.employeeid);
    printf("Employee age:%d\n", x.age);
    printf("Employee designation:%s\n", x.designation);
    printf("Employee salary:%.2f\n", x.salary);
}
