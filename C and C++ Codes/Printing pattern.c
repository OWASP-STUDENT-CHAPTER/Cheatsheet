#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int initial_row = n - 1;
	int initial_col = 1 - n;
	int row, col;
	for (row = initial_row; row > -n; --row) {
	    for (col = initial_col; col < n; ++col) {
	        int distance_from_center = (abs(row) > abs(col)) ? abs(row) : abs(col);
	        printf("%d ", distance_from_center + 1);
	    }
	    printf("\n");
	}
	return 0;
}
