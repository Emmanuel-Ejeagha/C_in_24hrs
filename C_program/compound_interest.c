// Calculating compound interest.
#include <stdio.h>
#include <math.h>

int main(void)
{
	double principal = 0;
	double rate = 0.05;

	printf("Enter Your principal (-1 to end) ");
	scanf("%lf", &principal);

	while (principal != -1)
	{
		if (principal == -1)
			break;

		printf("Enter the number of year(s): ");
		int year = 0;
		scanf("%d", &year);

		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (int i = 1; i <= year; ++i)
		{
			double amount = principal * pow(1.0 + rate, i);
			printf("%4d%21.2f\n", i, amount);
		}
		printf("Enter Your principal (-1 to end) ");
		scanf("%lf", &principal);
	}

/*	for (int year = 1; year <= 10; ++year)
	{
		double amount = principal * pow(1.0 + rate, year);
		printf("%4d%21.2f\n", year, amount);
	}
*/
}
