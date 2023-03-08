#include <stdio.h>

int main(){
	int age, i;
	float fare, total;
	printf("Input the airfare\n");
	scanf("%f", &fare);
	total = 0;
	for(i = 0; i < 5; i++){
		printf("Input the age of person number %i\n", i);
		scanf("%i", &age);
		if((age > 3) && (age < 13)){
			total = (float )total + (float)(fare * 0.5);
		} else if(age >= 13){
			total = (float)total + (float)fare;
		}
	}

	printf("%f\n", total);
}
