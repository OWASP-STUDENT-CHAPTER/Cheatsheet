//binary search
#include <stdio.h>
int main(void){
	int A[] = {11, 22, 45, 74, 124, 563, 859}, n, result = 0, x;
	n = sizeof(A)/sizeof(int);
	printf("Which number you are looking for ");
	scanf("%d", x);
	result = n;
	if(result == n/2){
		printf("The number you searched for is found at ")
	}
	return 0;
}

int BinarySearch(int A, int n, int x){
	if(x == n/2){
		return n/2;
	}else if(x>n/2){
		return 
	}
}
