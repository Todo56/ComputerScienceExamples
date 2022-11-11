#include <stdio.h>

int main (){
	int math, phys, chem;
	printf("Input maths mark:\n");
	scanf("%i", &math);
	printf("Input chemistry mark:\n");
	scanf("%i", &chem);
	printf("Input physics mark:\n");
	scanf("%i", &phys);

	if((math >= 65) && (phys >= 65) && (chem >= 50)){
		if(((math + phys + chem) >= 190) || ((math +phys) >= 140)){
			printf("\033[0;32mElegible\n");
			printf("\033[0m");
			return 0;
		}
	}
	printf("\033[0;31mInelegible\n");
	printf("\033[0m");
}
