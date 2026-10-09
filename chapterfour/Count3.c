#include <stdio.h>

int main()
{
	char chrResponse = '\0';

	printf("\n\t= Counting Program =");
	printf("\nWould you like to start the Counting Program? (y / n): ");
	scanf("%c", &chrResponse);

	if (chrResponse == 'y' || chrResponse == 'Y')
	{
		int intResp1 = 0;
		int intResp2 = 0;
		int intResp3 = 0;
		printf("\nEnter number to start counting from: ");
		scanf("%d", &intResp1);
		printf("\nEnter number to stop counting at: ");
		scanf("%d", &intResp2);
		printf("\nEnter number to increment by: ");
		scanf("%d", &intResp3);
		
		for (; intResp1 <= intResp2; intResp1 += intResp3)
		{
			printf("\nCurrent digit is %d\n", intResp1);
		}
	}
	
	return 0;
}

