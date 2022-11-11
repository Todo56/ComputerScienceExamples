#include<stdio.h>
int main (){
	int input, i = 0;
	printf("Input a number:\n");
	scanf("%i", &input);
	for(i = 1; i <= input; i++){
		if((input % i) == 0){
			printf("%i\n", i);
		}
	}

}




