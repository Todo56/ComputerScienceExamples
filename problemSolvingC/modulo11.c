#include <stdio.h>
int main(){
	int weighting = 10;
	int total = 0;
	int count = 0;
	int digit;
	int value;
	int remainder;
	int checkDigit;
	do {
		printf("Input the next digit\n");
		scanf("%i", &digit);
		value = digit * weighting;
		total = total + value;
		weighting = weighting -1;
		count = count + 1;
	} while( count != 9);
	remainder = total % 11;
	checkDigit = 11 - remainder;
	if(checkDigit == 10){
		checkDigit = -1;
	}
	printf("%i", checkDigit);

}
