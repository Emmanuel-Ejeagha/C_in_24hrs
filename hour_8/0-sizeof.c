// Using the sizeof operator
#include <stdio.h>

int main(void)
{
	char ch = ' ';
	int int_num = 0;
	float flt_num = 0.0f;
	double dbl_num = 0.0;

	printf("The size of char is: %zu-byte(s)\n", sizeof(char));
	printf("The size of ch is: %zu-byte(s)\n", sizeof ch);
	printf("The size of int is: %zu-byte(s)\n", sizeof(int));
	printf("The size of int_num: %zu-byte(s)\n", sizeof int_num);
	printf("The size of float is: %zu-byte(s)\n", sizeof(float));
	printf("The size of flt_num is: %zu-byte(s)\n", sizeof flt_num);
	printf("The size of double is: %zu-byte(s)\n", sizeof(double));
	printf("The size of dbl_num is: %zu-byte(s)\n", sizeof dbl_num);
	return(0);
}
