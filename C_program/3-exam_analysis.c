// Analysis of examination results
#include <stdio.h>

int main(void)
{
	int passes = 0;
	int failures = 0;
	int students = 1;
	
	printf("%s", "In 10 courses, how many do you passed?\n");
	while (students <= 10)
	{
		printf("%s", "Enter result (1=pass,2=fail): ");
		int result = 0;
		scanf("%d", &result);

		if (result == 1)
			passes += 1;
		else
			failures += 1;
		students += 1;
	}
	printf("You passed %d course(s)\n", passes);
	printf("You failed %d course(s)\n", failures);

	if (passes > 8)
		puts("Bonus to instructor!");
}
