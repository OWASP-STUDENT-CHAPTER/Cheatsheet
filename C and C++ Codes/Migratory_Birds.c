#include <stdio.h>
#include <stdlib.h>
int compare(int, int);
int main(void){
    int num, result1=0,result2=0, result3=0, result4=0, result5=0, result6=0, result7=0;
    int s1=0, s2=0, s3=0, s4=0, s5=0, i;
    int *a;
    scanf("%d",&num);
    a = (int*)malloc(num*sizeof(int));
    for(i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<num; i++){
        if(a[i] == 1){
            s1 += 1;
        }else if(a[i] == 2){
            s2 += 1;
        }else if(a[i] == 3){
            s3 += 1;
        }else if(a[i] == 4){
            s4 += 1;
        }else {
            s5 += 1;
        }
    }
    result1 = compare(s1, s2);
    result2 = compare(s2, s3);
    result3 = compare(s3, s4);
    result4 = compare(s4, s5);
    result5 = compare(result1, result2);
    result6 = compare(result3, result4);
    result7 = compare(result5, result6);
    printf("%d", result7);
    return 0;
}

int compare(int x, int y){
    if(x>y){
        return x;
    }else if (x<y){
        return y;
    }else return x;
}
