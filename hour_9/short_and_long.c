// Using short and long
#include <stdio.h>

int main(void)
{
	printf("The size of short int is: %zu.\n",
			sizeof(short int));
	
	printf("The size of long int is: %zu.\n",
			sizeof(long int));
	
	printf("The size of float is: %zu.\n",
			sizeof(float));
	
	printf("The size of double is: %zu.\n",
			sizeof(double));
	
	printf("The size of long double is: %zu.\n",
			sizeof(long double));
	return(0);
	
}
