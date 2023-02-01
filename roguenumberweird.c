#include <stdio.h>
int rogueValue = -1;
int total = 0;
int count = 0;
int number;
float average;
int main(){
	printf("Input a number\n");
	scanf("%i", &number);
	while(number != rogueValue){
		count = count + 1;
		total = total + number;
		printf("Give it another try\n");
		scanf("%i", &number);
	}
	if(count > 0){
		average = (float) total / (float) count;
		printf("Avg: %f\n", average);	
	}
}
