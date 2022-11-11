#include <stdio.h>

void main(){
	char character1;
	printf("Input a character:\n");
	scanf("%c", &character1);
	if(character1 == 'a' || character1 == 'e' || character1 == 'i' || character1 == 'o' || character1 == 'u' || character1 == 'A' || character1 == 'E' || character1 == 'I' || character1 == 'O' || character1 == 'U'){
		printf("It is a vowel.\n");
	} else {
		printf("It is not a vowel.\n");
	}
}
