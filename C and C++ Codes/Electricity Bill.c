//Electricity Bill
#include <stdio.h>
int main(void){
    int id, units;
    double cost = 0.0;
    char name[100];
    printf("Enter the user id of user\n"); scanf("%d", &id);
    printf("Enter the name of user\n"); scanf("%s", name);
    printf("Enter the number of units consumed by user\n"); scanf("%d", &units);
    if(units <= 100){
        if(units <= 50){
            cost = 50.00;
        }else cost = 1.0*units;
	}else if(units > 100 && units <= 300){
        cost = 2.0*units;
    }else if(units > 300){
        cost = 3.0*units;
    }if(cost > 1000){
        cost += 0.15*cost;
    }
    printf("Charge details\n%d %s %.2lf", id, name, cost);
    return 0;
}
