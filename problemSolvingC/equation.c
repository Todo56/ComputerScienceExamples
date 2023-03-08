#include<stdio.h>
#include<math.h>

int main(){
	int y1, y2, x, res;
	for(x = -4; x <= 4; x++){
		res = pow(x, 2);
		
		y1 = 2*(2 - res);
		y2 = 2 - (2- res);
		printf("%i %i  - %i\n", y1, y2, x);
	}

}
