#include <stdio.h>

int main(){
	int sum, index, high, input;
	double avg;
	printf("Input the first mark\n");
	scanf("%i", &input);
	index = 0;
	high = input;
	while(input != 999){
		if(input > high){
			high = input;
		}
		sum = sum + input;
		index = index + 1;
		printf("Input the next mark\n");
		scanf("%d", &input);
	}
	printf("Highest mark:%i\n", high);
	printf("debug:%i\n", index);
	avg = (double) sum / (double)index;
	printf("Average: %lf\n", avg);
	return 0;
}
