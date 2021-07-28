#include <stdio.h>
int main(){
	int A[3][3] = {{5,6,1}, {8,9,4}, {7,8,8}}; //second bracket mein (vo coloumns ko indicate karta hai) size likhna zaroori hai 
	int rows = 3, cols = 3, i = 0, j = 0;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("value = %d and address = %d\n", A[i][j], &A[i][j]);
		}
	}
	return 0;
}
