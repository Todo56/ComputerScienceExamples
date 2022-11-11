#include <stdio.h>
int main (){
	int input, num1, num2, num3, i, sum;
	printf("Input a number\n");
	scanf("%i", &input);
	num1 = 0;
	num2 = 1;
	sum = 0;
	printf("0\n");
	for(i = 1; i <= input; i++){
		num3 = num2 + num1;

		num2 = num3;
		num1 = num2;
		
		printf("%i\n", num3);
	} 

}
