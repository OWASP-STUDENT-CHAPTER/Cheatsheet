//matrix addition (square only)
#include <stdio.h>
int num;
void readArray(int [][num]);
void sumOfArray(int [][num], int [][num]);
int main(void){
	printf("Enter the size of the matrix\n");
    scanf("%d", &num);
    int arr1[num][num], arr2[num][num];
    readArray(arr1);
    readArray(arr2);
    sumOfArray(arr1, arr2);
    return 0;
}

void readArray(int arr[][num]){
    int i, j;
    printf("Enter the elements of the matrix\n");
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void sumOfArray(int arr1[][num], int arr2[][num]){
    int i, j;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}

