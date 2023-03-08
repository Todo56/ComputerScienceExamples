#include <stdio.h>
#define PI 3.1415

void main(){
	double area, circum, radius;
	printf("What is the radius of the circle?\n");
	scanf("%lf", &radius);
	
	area = radius * radius * PI;
	circum = radius * 2 * PI;

	printf("The area of the circle is %lf\nThe circumference of the circle is %lf\n", area, circum);
}
