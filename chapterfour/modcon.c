#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int intSelection1 = 0;
	int intResp1 = 0;
	int intResp2 = 0;
	int intResp3 = 0;
	int intResp4 = 0;
	int intResp5 = 0; 
	int intElapsedTime = 0;
	int intCurrentTime = 0;
	int int1 = 0;
	int int2 = 0;
	int int3 = 0;
	int int4 = 0;
	int int5 = 0;
	int intTime = 0;
	srand(time(NULL));	

	while (intSelection1 != 4) {
		printf("\n\t= The Concentration Game =\n");
		printf("\n1\tEasy (remember 3 numbers displayed for 5 seconds)");
		printf("\n2\tIntermediate (remember 5 numbers displayed for 5 seconds)");
		printf("\n3\tDifficult (remember 5 numbers displayed for 2 seconds)");
		printf("\n4\tQuit\n");
		printf("\nInput: ");
		scanf("%d", &intSelection1);

		if (intSelection1 == 1) {
			int1 = rand() % 100;
			int2 = rand() % 100;
			int3 = rand() % 100;
			printf("\nTry your best to remember these numbers!\n");
			printf("\n%d %d %d\n", int1, int2, int3);
			intCurrentTime = time(NULL);

			do {
				intElapsedTime = time(NULL);
			} while ( (intElapsedTime - intCurrentTime) < 4);
				system("clear");
			printf("\nPlease enter the # one space from each other ex. 0 0 0");
			printf("\nWhat were those numbers?: ");
			scanf("%d%d%d", &intResp1, &intResp2, &intResp3);

			if (intResp1 == int1 && intResp2 == int2 && intResp3 == int3)
				printf("\nCongratulations, you got them all right!\n");
			else
				printf("\nSorry, you didn't get those right.\n");
		}

		if (intSelection1 == 2 || intSelection1 == 3) {
			if (intSelection1 == 2)
				intTime = 4;
			else
				intTime = 1;
			int1 = rand() % 100;
			int2 = rand() % 100;
			int3 = rand() % 100;
			int4 = rand() % 100;
			int5 = rand() % 100;
			printf("\nTry your best to remember these numbers!\n");
			printf("\n%d %d %d %d %d\n", int1, int2, int3, int4, int5);
			intCurrentTime = time(NULL);

			do {
				intElapsedTime = time(NULL);
			} while ( (intElapsedTime - intCurrentTime) < intTime);
				system("clear");
			printf("\nPlease enter the # one space from each other ex. 0 0 0 0 0");
			printf("\nWhat were those numbers?: ");
			scanf("%d%d%d%d%d", &intResp1, &intResp2, &intResp3, &intResp4, &intResp5);

			if (intResp1 == int1 && intResp2 == int2 && intResp3 == int3 && intResp4 == int4 && intResp5 == int5)
				printf("\nCongratulations, you got them all right!\n");
			else
				printf("\nSorry, you didn't get those right.\n");
		}
	}

	return 0;
}
