#include <stdio.h>
int main(){
	int i;
	float rate, conversion;
	printf("Input the exchange rate between the currency and the USD:\n");
	scanf("%f", &rate);
	for (i = 1; i < 21; i++){
		conversion = (float) i * rate;
		printf("%i   |   %f\n", i, conversion);
	}
}
