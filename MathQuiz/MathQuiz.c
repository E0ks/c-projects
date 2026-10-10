#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int intMultiplicand1 = 0;
	int intMultiplicand2 = 0;
	int intMultiplicand3 = 0;
	int intMultiplicand4 = 0;
	int intMultiplicand5 = 0;
	int intMultiplicand6 = 0;

	int intMultiplier1 = 0;
	int intMultiplier2 = 0;
	int intMultiplier3 = 0;
	int intMultiplier4 = 0;
	int intMultiplier5 = 0;
	int intMultiplier6 = 0;

	int intAddend1 = 0;
	int intAddend2 = 0;
	int intAddend3 = 0;
	int intAddend4 = 0;
	int intAddend5 = 0;
	int intAddend6 = 0;
	int intAddend7 = 0;
	int intAddend8 = 0;
	int intAddend9 = 0;
	int intAddend10 = 0;
	int intAddend11 = 0;
	int intAddend12 = 0;

	srand(time(NULL));

	char chrResponse = '\0';
	int intAns1 = 0;
	int intAns2 = 0;
	int intAns3 = 0;
	int intAns4 = 0;
	int intAns5 = 0;
	int intAns6 = 0;
	int intAns7 = 0;
	int intAns8 = 0;
	int intAns9 = 0;
	int intAns10 = 0;
	int intAns11 = 0;
	int intAns12 = 0;
	int intCorrect = 0;
	int intWrong = 0;

	printf("\n\t= Welcome to the math quiz =\n");
	printf("\nA.\tStart Multiplication Test");
	printf("\nB.\tStart Addition Test\n");
	printf("\nSelection: ");
	scanf("%c", &chrResponse);

	if (chrResponse == 'a' || chrResponse == 'A') {
		intMultiplicand1 = rand() % 89 + 10;
		intMultiplicand2 = rand() % 89 + 10;
		intMultiplicand3 = rand() % 89 + 10;
		intMultiplicand4 = rand() % 89 + 10;
		intMultiplicand5 = rand() % 89 + 10;
		intMultiplicand6 = rand() % 89 + 10;

		intMultiplier1 = rand() % 89 + 10;
		intMultiplier2 = rand() % 89 + 10;
		intMultiplier3 = rand() % 89 + 10;
		intMultiplier4 = rand() % 89 + 10;
		intMultiplier5 = rand() % 89 + 10;
		intMultiplier6 = rand() % 89 + 10;
		system("clear");
		printf("\n\t= Multiplication Test =\n");
		printf("\n1.\t%d * %d\n", intMultiplicand1, intMultiplier1);
		printf("\nSelection: ");
		scanf("%d", &intAns1);
		
		system("clear");
		printf("\n2.\t%d * %d\n", intMultiplicand2, intMultiplier2);
		printf("\nSelection: ");
		scanf("%d", &intAns2);

		system("clear");
		printf("\n3.\t%d * %d\n", intMultiplicand3, intMultiplier3);
		printf("\nSelection: ");
		scanf("%d", &intAns3);

		system("clear");
		printf("\n4.\t%d * %d\n", intMultiplicand4, intMultiplier4);
		printf("\nSelection: ");
		scanf("%d", &intAns4);

		system("clear");
		printf("\n5.\t%d * %d\n", intMultiplicand5, intMultiplier5);
		printf("\nSelection: ");
		scanf("%d", &intAns5);

		system("clear");
		printf("\n6.\t%d * %d\n", intMultiplicand6, intMultiplier6);
		printf("\nSelection: ");
		scanf("%d", &intAns6);

		if (intAns1 == intMultiplicand1 * intMultiplier1)
			++intCorrect;
		else
			++intWrong;

		if (intAns2 == intMultiplicand2 * intMultiplier2)
			++intCorrect;
		else
			++intWrong;

		if (intAns3 == intMultiplicand3 * intMultiplier3)
			++intCorrect;
		else
			++intWrong;

		if (intAns4 == intMultiplicand4 * intMultiplier4)
			++intCorrect;
		else
			++intWrong;

		if (intAns5 == intMultiplicand5 * intMultiplier5)
			++intCorrect;
		else
			++intWrong;

		if (intAns6 == intMultiplicand6 * intMultiplier6)
			++intCorrect;
		else
			++intWrong;

		system("clear");
		printf("\n\t= Results =\n");
		printf("\nCorrect: %d\n", intCorrect);
		printf("\nIncorrect: %d\n", intWrong);
	}

	if (chrResponse == 'b' || chrResponse == 'B') {
		intAddend1 = rand() % 89 + 10;
		intAddend2 = rand() % 89 + 10;
		intAddend3 = rand() % 89 + 10;
		intAddend4 = rand() % 89 + 10;
		intAddend5 = rand() % 89 + 10;
		intAddend6 = rand() % 89 + 10;
		intAddend7 = rand() % 89 + 10;
		intAddend8 = rand() % 89 + 10;
		intAddend9 = rand() % 89 + 10;
		intAddend10 = rand() % 89 + 10;
		intAddend11 = rand() % 89 + 10;
		intAddend12 = rand() % 89 + 10;

		system("clear");
		printf("\n\t= Multiplication Test =\n");
		printf("\n1.\t%d + %d\n", intAddend1, intAddend2);
		printf("\nSelection: ");
		scanf("%d", &intAns7);
		
		system("clear");
		printf("\n2.\t%d + %d\n", intAddend3, intAddend4);
		printf("\nSelection: ");
		scanf("%d", &intAns8);

		system("clear");
		printf("\n3.\t%d + %d\n", intAddend5, intAddend6);
		printf("\nSelection: ");
		scanf("%d", &intAns9);

		system("clear");
		printf("\n4.\t%d + %d\n", intAddend7, intAddend8);
		printf("\nSelection: ");
		scanf("%d", &intAns10);

		system("clear");
		printf("\n5.\t%d + %d\n", intAddend9, intAddend10);
		printf("\nSelection: ");
		scanf("%d", &intAns11);

		system("clear");
		printf("\n6.\t%d + %d\n", intAddend11, intAddend12);
		printf("\nSelection: ");
		scanf("%d", &intAns12);

		if (intAns7 == intAddend1 + intAddend2)
			++intCorrect;
		else
			++intWrong;

		if (intAns8 == intAddend3 + intAddend4)
			++intCorrect;
		else
			++intWrong;

		if (intAns9 == intAddend5 + intAddend6)
			++intCorrect;
		else
			++intWrong;

		if (intAns10 == intAddend7 + intAddend8)
			++intCorrect;
		else
			++intWrong;

		if (intAns11 == intAddend9 + intAddend10)
			++intCorrect;
		else
			++intWrong;

		if (intAns12 == intAddend11 + intAddend12)
			++intCorrect;
		else
			++intWrong;

		system("clear");
		printf("\n\t= Results =\n");
		printf("\nCorrect: %d\n", intCorrect);
		printf("\nIncorrect: %d\n", intWrong);
	}

}
