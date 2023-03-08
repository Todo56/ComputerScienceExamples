#include<stdio.h>

int main(){
	int numsales, quantity, initial, input, remaining;
	initial = 210; 
	
	printf("Input the first purchase quantity\n");
	scanf("%i", &input);

	numsales = 0;
	quantity = 0;
	while(input != 0){
		numsales = numsales + 1;
		quantity = quantity + input;
		printf("Input the next sale\n");
		scanf("%i", &input);
	}
	remaining = initial - quantity;
	printf("There have been %i sales.\n", numsales);
	printf("%i products have been bought.\n", quantity);
	printf("We have %i products left.\n", remaining);

}

