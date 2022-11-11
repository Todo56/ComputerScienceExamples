#include <stdio.h>

int main(){
	int f1, f2, f3, i, n;
	f1 = 0;
	f2 = 1;
	f3 = 0;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("%d\n%d\n", f1, f2);
	for (i = 0; i <= n; i++){
		f3 = f2 + f1;
		printf("%d\n", f3);
		f2 = f3;
		f1 = f2;
	}
	return 0;
}
