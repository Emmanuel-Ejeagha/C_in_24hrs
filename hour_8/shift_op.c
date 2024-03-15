// using shift operators

#include <stdio.h>

int main(void)
{
	int x, y, z;

	x =225;
	y = 5;
	printf("Given x = %4d, i.e., 0X%04X\n", x, x);
	printf("      y = %4d, i.e., 0X%04x\n", y, y);
	z = x >> y;
	printf("x >> y yeilds: %6d, i.e., 0X%04X\n", z, z);
	z = x << y;
	printf("x << y yeilds: %6d, i.e., 0X%04X\n", z, z);
	return(0);
}
