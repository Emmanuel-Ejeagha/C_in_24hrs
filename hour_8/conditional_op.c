// Using the ?: operator
#include <stdio.h>

int main(void)
{
	int x;

	x = sizeof(int);
	printf("%s\n",
			(x == 4)
			? "The int data type has 4 bytes."
			: "int dosen't have 2 bytes.");
	printf("The maximum value of int is: %d\n",
			(x != 4) ? ~(1 << x * 8 - 1) : ~(1 << 15));
	return(0);
}
