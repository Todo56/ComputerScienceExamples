#include <stdio.h>

int main(){
	int input1, input2, i, h, l;
	printf("Enter the first number\n");
	scanf("%i", &input1);
	h = input1;
	l = input1;
	for(i = 1; i <= 9; i++){
		printf("Enter the next number\n");
		scanf("%i", &input2);
		if(input2 > h){
			h = input2;
		} else if(input2 < l){
			l = input2;
		}
	}

	printf("%i\n%i\n", h, l);
	return 0;
}
