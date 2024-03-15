// Using the logical negation operator

#include <stdio.h>

int main(void)
{
	int num = 7;

	printf("Given num = 7\n");
	printf("!(num < 7) yeilds: %d\n", !(num < 7));
	printf("!(num > 7) yeilds: %d\n", !(num > 7));
	printf("!(num == 7) yeilds: %d\n", !(num == 7));
	return(0);
}
