#include <stdio.h>
#include <stdlib.h>
int main(void){
    int p=0, d=0, m=0, s=0, i=0, x=0, num=0, sum=0;
    int *cost;
    scanf("%d%d%d%d", &p, &d, &m, &s);
    while(p-d <= m){
        num += 1;
    }
    cost = (int*)malloc(sizeof(int)*num);
    while(p-d<=m){
        x = p;
        cost[i] = x-d;
        p = p-d;
    }
    for(i=0; i<num; i++){
        sum += cost[i];
    }
    if(sum == s){
        printf("%d", num);
    }else if (sum < s){
        while(sum <= s){
            sum += m;
            num++;
        }
        printf("%d", num);
    }
    return 0;
}
