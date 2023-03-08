#include <stdio.h>
int main(){
	int posCount = 0;
	int negCount = 0;
	int number;
	do {
		printf("Input the next number\n");
		scanf("%i", &number);
		if(number > 0){
			posCount = posCount + 1;
		}
		if(number < 0){
			negCount = negCount + 1;
		}
	} while( number != 0);
	printf("Positive Numbers: %i    Negative Numbers %i\n", posCount, negCount);
}
