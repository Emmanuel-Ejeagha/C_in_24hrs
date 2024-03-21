// Gas Milage Tracker
#include <stdio.h>

int main(void)
{
	float gallons, miles, total_miles = 0, total_gas = 0;

	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%f", &gallons);

	while (gallons != -1)
	{
		printf("%s", "Enter the miles driven: ");
		scanf("%f", &miles);

		total_gas += gallons;
		total_miles += miles;

		float average = miles / gallons;
		printf("The miles/gallons for this tank was %f\n", average);
		total_gas += gallons;
		total_miles += miles;

		printf("%s", "Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
	}
	double total_average = (double) total_miles / total_gas;
	if (total_gas != 0)
		printf("The overall average miles/gallon was %f\n", total_average);
	else
		printf("No data entered.\n");
}
