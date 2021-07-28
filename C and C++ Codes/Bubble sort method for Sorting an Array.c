//Bubble sort method for Sorting an Array
#include<stdio.h>
int main(void){
    int num, temp, i, j;
    printf("Enter the size of the array\n"); scanf("%d", &num);
    int arr[num];
    printf("Enter those %d elements of the array\n", num);
    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    for(j=0; j<num; j++){
        for(i=0; i<num-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted list is\n");
    for(i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
