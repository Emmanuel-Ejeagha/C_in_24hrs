// Using sin(), cos(), and tan() functions
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x = 45.0;
	double radian = x * M_PI / 180.0;

	printf("The sine of 45 is: %f.\n", sin(radian));
	printf("The cosine of 45 is: %f\n", cos(radian));
	printf("The tangent of 45 is: %f.\n", tan(radian));
	return(0);
}
