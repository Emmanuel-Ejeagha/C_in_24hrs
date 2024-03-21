// Credit limit Calculator
#include <stdio.h>

int main(void)
{
	int acct_num = 0;
	float begin_bal, total_charges = 0;
	float total_credits, credit_limit, new_bal = 0;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &acct_num);

	while (acct_num != -1)
	{
		printf("Enter beginning balance: ");
		scanf("%f", &begin_bal);
		printf("Enter total charges: ");
		scanf("%f", &total_charges);
		printf("Enter total credits: ");
		scanf("%f", &total_credits);
		printf("Enter credit limits: ");
		scanf("%f", &credit_limit);

		new_bal = (begin_bal + total_charges) - total_credits;

		if (new_bal > begin_bal)
		{
			printf("Account:       %d\n", acct_num);
			printf("Credit limit:  %.2f\n", credit_limit);
			printf("Balance:       %.2f\n", new_bal);
			printf("Credit Limit Exceeded\n\n");
		}
		else
			printf("\n");
		printf("Enter account number (-1 to end): ");
		scanf("%d", &acct_num);
	}
}
