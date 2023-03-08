#include <stdio.h>
#include <stdbool.h>
int main(){
        int num = 1;
        while(true){
                printf("Input a number\n");
                scanf("%i", &num);
        	if(num == 0){
			printf("exiting\n");
			break;
		}
	}
}
