#include<stdio.h>
int wrongsetsum(int, int*);
int rightsetsum(int, int*);
int main()
{
	int num;
	scanf("%d", &num);
	int arr[num], i, wrong, right;
	for(i=0; i<num; i++){
	    scanf("%d", &arr[i]);
	}
	wrong = wrongsetsum(num, arr);
	right = rightsetsum(num, arr);
	printf("%d\n%d", wrong, right);
	return 0;
}

int wrongsetsum(int n, int *a){
    int i=0, temp=0, sum=0;
    for(i=0; i<n; i++){
        if(a[i]<0){
            temp = a[i] + (-2)*a[i];
            sum += temp;
        }else sum += a[i];
    }
    return sum;
}

int rightsetsum(int n, int *a){
    int i=0, sum=0;
    for(i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}
