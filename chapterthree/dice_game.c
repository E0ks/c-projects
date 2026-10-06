#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int intDie1 = 0;
	int intDie2 = 0;
	int intDiceSum = 0;
	srand(time(NULL));
	intDie1 = (rand() % 6) + 1;
	intDie2 = (rand() % 6) + 1;
    intDiceSum = intDie1 + intDie2;

	if (intDiceSum == 7 || intDiceSum == 11)
	{
		printf("\nPlayer wins! Dice sum is %d\n", intDiceSum);
    }

	else
	{
		printf("\nThanks for playing! Please try again.");
		printf("\nDice 1: %d", intDie1);
		printf("\nDice 2: %d\n", intDie2);
	}

	return 0;
}
