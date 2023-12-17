#include <stdio.h>
/* Main: This program prints characters using standard output
 */

int main(void)
{
	int ch;

	ch = 90;
	printf("The character that has numeric value of 90 is:\n");
	putc(ch, stdout);
	printf("\n");
	return(0);

}
