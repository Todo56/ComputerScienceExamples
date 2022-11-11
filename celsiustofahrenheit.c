#include <stdio.h>

int main(){

	int far;
	int cel;
	printf("Write celsius");
	scanf("%d", &cel);
	far = (cel * 1.8) + 32;
	printf("Fahrenheit %d", far);
	return 0;
}
