#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char chrResponse = '\0';
	int intNumQues = 0;
	int intOperand1 = 0;
	int intOperand2 = 0;
	int intResponse1 = 0;
	int intCounterCorrect = 0;
	int intCounterFalse = 0;
	int i;
	srand(time(NULL));

	printf("\nWould you like to play Math Quiz 1.0? (y / n): ");
	scanf("%c", &chrResponse);

	if (chrResponse == 'y' || chrResponse == 'Y')
	{
		printf("\nHow many questions would you like to answer: ");
		scanf("%d", &intNumQues);

		for (int i = 0; i < intNumQues; i++)
		{
			intOperand1 = rand() % 100;
			intOperand2 = rand() % 100;
			printf("\nWhat is the sum of %d + %d: ", intOperand1, intOperand2);
			scanf("%d", &intResponse1);

			if (intResponse1 == intOperand1 + intOperand2)
			{
				printf("\nHey, you got that right!\n");
				++intCounterCorrect;
			}

			else
			{
				printf("\nSorry, you got that wrong!\n");
				++intCounterFalse;
			}
		}
	}

	printf("\n\t= Final Results =\n");
	printf("\nTotal number gotten right: %d", intCounterCorrect);
	printf("\nTotal number gotten wrong: %d\n", intCounterFalse);

	return 0;
}
