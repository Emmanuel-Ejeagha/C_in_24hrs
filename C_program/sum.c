// summation with for loop.
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int last_num  = 100;

	for (int number = 2; number <= 99; number += 2)
	{
		printf("%d + ", number);
		sum += number;
	}
	sum += last_num;
	printf("100");
	printf("\nSum is %d\n", sum);
}
