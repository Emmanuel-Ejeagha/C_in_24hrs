// class average with sential control iteration

#include <stdio.h>

int main(void)
{
	int total = 0;
	int counter = 0;

	printf("%s", "Enter an integer or -1 to end ");
	int grade = 0;
	scanf("%d", &grade);

	while (grade != -1)
	{
		total += grade;
		counter += 1;

		printf("%s", "Enter an integer or -1 to end ");
		scanf("%d", &grade);
	}
	if (grade != 0)
	{
		double average = (double) total / counter;
		printf("Class average is %.2f\n", average);
	}
	else
		puts("No grades were entered"); 


}
