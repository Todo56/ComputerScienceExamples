#include<stdio.h>

int main (){
	int num1, num2, sum;
	float avg;
	printf("Enter the first numbers:\n");
	scanf("%d", &num1);
	printf("Enter the second number:\n");
	scanf("%d", &num2);

	sum = num1+ num2;
	avg = sum / 2;
	printf("SUM is %d\n", sum);
	printf("Average is: %f\n", avg);
	return 0;
}
