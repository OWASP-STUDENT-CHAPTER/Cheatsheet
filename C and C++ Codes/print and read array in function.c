#include <stdio.h>
int num;
void readArray(int [][num]);
void printArray(int [][num]);
int main(void){
    scanf("%d", &num);
    int arr1[num][num], arr2[num][num];
    readArray(arr1);
    //readArray(arr2);
    printArray(arr1);
    return 0;
}

void readArray(int arr[][num]){
    int i, j;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int arr[][num]){
    int i, j;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
