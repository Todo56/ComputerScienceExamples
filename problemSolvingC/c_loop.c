#include <stdio.h>

int main(){
	int num, sum = 0;

	// Output Statement
	printf("The first 10 numbers");

	// Initialize for loop
	for(num = 1; num <= 10; num++){
		// Sum the number
		sum  = sum + num;
		// print the number
		printf("%d\n", num);
	}
	// Output final statement
	printf("The sum is %i", sum);
}
