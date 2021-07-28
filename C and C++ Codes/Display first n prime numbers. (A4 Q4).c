//Display first n prime numbers. (A4 Q4)
#include <stdio.h>
int checkPrime(int);
int main(void){
	int n, j=0, k=0;
	int prime[100000], condition[100000];
	printf("Enter a number ");
	scanf("%d", &n);
	if(n<=1){
		printf("Invalid input");
	}else{
		for(j=3; j<n+1; j++){
		    condition[k] = checkPrime(j);
		    prime[k] = j;
		    k++;
	    }
	    printf("Prime numbers are\n2\n");
	    for(j=0; j<k; j++){
		    if(condition[j]){
			    printf("%d\n", prime[j]);
		    }
	    }
	}	
	return 0;
}

int checkPrime(int n){
	int rem = 1, i = 2;
	while(rem != 0 && i <= n-1){
	    rem = n%i;
		i++;
	}    
	if(rem == 0){
	    return 0;
	}else return 1;
}
