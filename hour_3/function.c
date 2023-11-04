#include <stdio.h>
/**
 * main: adds two integers
 * integer_add: This function adds two integers
 * @a: first integer
 * @b: second integer
 * return: result
 */
int integer_add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}
int main(void)
{
	int sum;

	sum = integer_add(75, 9);
	printf("The addition of 75 and 9 is %d.\n", sum);
	return(0);
}
