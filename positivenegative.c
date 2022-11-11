#include <stdio.h>

int main (){
	int m;
	printf("Enter a signed integer\n");
	scanf("%d", &m);
	if(m>0){
		printf("n = 1");
	} else if(m == 0){
		printf("n = 0");
	} else {
		printf("n = -1");
	}

}
