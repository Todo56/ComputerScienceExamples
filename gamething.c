#include<stdio.h>

int main(){
	int i, won, game;
	float ratio;
	won = 0;
	for(i = 1; i <= 10; i++){
		printf("Input result of game %i", i);
		scanf("%i", &game);
		if(game == 1){
			won = won + 1;
		}
	}
	i = i -1;
	ratio = ((float)won/(float)i) * 100;
	printf("Ratio of games won: %f\n", ratio);
}
