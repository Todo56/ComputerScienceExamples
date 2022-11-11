#include <stdio.h>

void main(){
	char name[20];
	double quiz, mid, fin, ave;
	char grade;

	printf("Input the name of the student:\n");
	scanf("%s", &name);
	printf("\nInput the quiz score:\n");
	scanf("%lf", &quiz);
	printf("\nInput the midterm score:\n");
	scanf("%lf", &mid);
	printf("\nInput the final score:\n");
	scanf("%lf", &fin);

	ave = ((quiz + mid + fin) / 3);

	if((ave >= 90) && (ave <= 100)){
		grade = 'A';
	} else if(ave >= 70){
		grade = 'B';
	} else if(ave >=50){
		grade = 'C';
	} else if(50 > ave){
		grade = 'F';
	} else {
		printf("Invalid score.");
		return;
	}

	printf("\n%s's grade is a %c\nHis score was %lf\n", name, grade, ave);
}
