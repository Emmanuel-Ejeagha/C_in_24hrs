#include <stdio.h>
/** Main: This program is about minimum field width
 */

int main(void)
{
	int num1 = 12;
	int num2 = 12345;
	
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%5d\n", num1);
	printf("%05d\n", num1);
	printf("%2d\n", num2);
	return(0);
}
