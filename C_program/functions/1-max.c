#include <stdio.h>
// Finding the maximum of three numbers

int maximum(int x, int y, int z);

int main(void)
{
	int num1, num2, num3 = 0;

	printf("%s", "Enter three integers: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	printf("Maximum number is: %d\n", maximum(num1, num2, num3));
}

int maximum(int x, int y, int z)
{
	int max = x;

	if (max == y)
		max = y;
	if (max == z)
		max = z;
	return max;
}
