//multiplication of matrix
#include <stdio.h>

int num;
void read(int [][num]);
void multiply(int [][num], int [][num]);

int main(void){
    scanf("%d", &num);
    int arr1[num][num], arr2[num][num];
    read(arr1);
    read(arr2);
    multiply(arr1, arr2);
    return 0;
}

void read(int arr[][num]){
    int i, j;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void multiply(int arr1[][num], int arr2[][num]){
    int i, j, k;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            int sum = 0;
            for(k=0; k<num; k++){
                sum += arr1[i][k]*arr2[k][j]; 
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
