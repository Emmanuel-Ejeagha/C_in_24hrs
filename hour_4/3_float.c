#include <stdio.h>
/**
 * Main: Prints float and integer
 * Returns: 0 Success Always
 */
int main(void)
{
	int int_num1, int_num2, int_num3;
	float flt_num1, flt_num2, flt_num3;

	int_num1 = 32 / 10;
	flt_num1 = 32 / 10;
	int_num2 = 32.0 / 10;
	flt_num2 = 32.0 / 10;
	int_num3 = 32 / 10.0;
	flt_num3 = 32 / 10.0;

	printf("The integer divis, of 32/10 is: %d\n", int_num1);
	printf("The floating point divs of 32/10 is: %f\n",flt_num1);
	printf("The integer divis. of 32.0/10 is: %d\n", int_num2);
	printf("The floating point divis of 32.0/10 is: %f\n", flt_num2);
	printf("The inter divis. of 32/10.0 is: %d\n", int_num3);
	printf("The floating point divis. of 32/10.0 is %f\n", flt_num3);
	return(0);
}
