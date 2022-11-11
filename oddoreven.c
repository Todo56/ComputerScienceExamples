#include <stdio.h>
int main(){
	int num1,  rem1;
	printf("Enter a number:\n");
	scanf("%i", &num1);
	rem1 = num1 % 2
	if(rem1 == 0){
		printf("This number is even\n");
	} else {
		printf("This is an odd number\n");
	}
}
