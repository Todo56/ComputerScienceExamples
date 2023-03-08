#include <stdio.h>
#include <stdbool.h>
int sendRestart(){
	printf("MENU\nPress the following buttons to perform calculations.\n   \033[31m1. Add\n \033[0m  2. Substract\n   3. Multiply\n   4. Divide\n   5. Modulus\n   6. Exit\n\n");
	int tempNum;
	scanf("%i", &tempNum);
	return tempNum;
}

int main(){
	while(true){
	int menuTyped;
	float value1;
	float value2;
	menuTyped = 0;
	menuTyped = sendRestart();
	
	float result;

		switch(menuTyped){
			case 1:
				printf("Input number 1:\n");
				scanf("%f", &value1);
				printf("Input number 2:\n");
				scanf("%f", &value2);
				result = value1 + value2;
				break;
			case 2:
				printf("Input number 1 (original value):\n");
                                scanf("%f", &value1);
                                printf("Input number 2 (value to substract):\n");
                                scanf("%f", &value2);
                                result = value1 - value2;
				break;
			case 3:
				printf("Input number 1:\n");
				scanf("%f", &value1);
                                printf("Input number 2:\n");
                                scanf("%f", &value2);
                                result = value1 * value2;
				break;
			case 4:
				printf("Input number 1 (numerator):\n");
                                scanf("%f", &value1);
                                printf("Input number 2 (denominator):\n");
                                scanf("%f", &value2);
				if(value2 == 0){
					printf("Division by 0...\n");
					return 1;
				}
                                result = value1 / value2;
				break;
			case 5:
				printf("Input number 1 (numerator):\n");
                                scanf("%f", &value1);
                                printf("Input number 2 (denominator):\n");
                                scanf("%f", &value2);
                                if(value2 == 0){
                                        printf("Division by 0...\n");
                                        return 1;
                                }
                                result = (int) value1 % (int) value2;
				break;
			case 6:
				printf("Exiting...\n");
				return 1;
		}

		printf("The result of that operation is: %f\n", result);
	}
}
