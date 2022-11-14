#include <stdio.h>

int main(){
	int i, num1, num2, num3, input;
	printf("Fibonacci sequence until when?\n");
	scanf("%i", &input);
	num1 = 0;
	num2 = 1;
	printf("Start Sequence:\n");
	printf("%i\n", num1);
	printf("%i\n", num2);
	for(i = 1; i < input; i++){
		num3 = num1 + num2;
		printf("%i\n", num3);
		num1 = num2;
		num2 = num3;
	}

}
