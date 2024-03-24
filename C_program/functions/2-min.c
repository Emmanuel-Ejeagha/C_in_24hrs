// Prints the minimum number
#include <stdio.h>

int minimum(int x, int y, int z);

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("%s", "Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("Minimun is: %d\n", minimum(num1, num2, num3));
}

int minimum(int x, int y, int z)
{
	int min = x;

	if (y < min)
		min = y;

	if (z < min)
		min = z;
	
	return min;
}
