#include <stdio.h>
#include <math.h>
int main(void){
	int input, rem = 1, i=0, number[1000], power=0, numberOfDigits, sum=0, toCheck;
	printf("Enter the number\n");
	scanf("%d", &input);
	toCheck = input;
	while(rem >0){
		rem = input/10;
		number[i] = input%10;
		i++;
		input = input/10;
	}
	numberOfDigits = i;
	power = number[0];
	//printf("%d\n", power);
	//printf("%d\n", numberOfDigits);
	for(i=0; i<numberOfDigits; i++){
		sum = sum + pow(number[i], power);
	}
	//sum = sum + pow(number[1], power);
	//printf("%d\n", sum);
	if(sum == toCheck){
		printf("Yes");
	}else {
	printf("No");
    }
	return 0;
}
