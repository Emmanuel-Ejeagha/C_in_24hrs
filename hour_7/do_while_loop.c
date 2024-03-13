#include <stdio.h>

// Using do-while loop to loop through a statement

int main(void)
{
	int i = 65;

	do
	{
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	}
	while (i < 72);
	return 0;
}
