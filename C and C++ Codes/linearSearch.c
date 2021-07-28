//linear search
#include <stdio.h>
int linearsearch(int, int, int);
int main(void){
	int A[] = {5,88,24,926,32,789,-987,405}, result=0, n, x;
	n = sizeof(A)/sizeof(int);
	printf("Which number you are looking for ");
	scanf("%d", &x);
	result = linearsearch(A, n, x);
	if(result<=n){
		printf("The number you searched for (%d) is found at position %d and index %d.", x, result+1, result);
	}else printf("Number not found!");
	return 0;
}

int linearsearch(int A[], int n, int x){
	int i=0;
	while(A[i] != x){
		i++;
		if(i>n) return i;
	}
	return i;
}
