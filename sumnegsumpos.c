#include<stdio.h>

int main(){
	int sumneg, sumpos, numpos, numneg, input;
	sumneg = 0;
	sumpos = 0;
	numpos = 0;
	numneg = 0;
	printf("Input the first number\n");
	scanf("%i", &input);
	while(input != 0){
		if(input < 0){
			numneg = numneg + 1;
			sumneg = sumneg + input;
		} else {
			numpos = numpos + 1;
			sumpos = sumpos + input;
		}
		printf("Input the next number\n");
		scanf("%i", &input);
	}

	printf("Total of %i negative numbers that sum up to %i.\n", numneg, sumneg);
	printf("Total of %i positive numbers that sum up to %i.\n", numpos, sumpos);

}
