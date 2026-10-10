#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int int1 = 0;
	int int2 = 0;
	int int3 = 0;
	int int4 = 0;
	int int5 = 0;
	int int6 = 0;
	int int7 = 0;
	int int8 = 0;
	int int9 = 0;
	int intResponse = 0;
	char chrResponse = '\0';
	srand(time(NULL));

	while (intResponse != 4) {
		printf("\n\t= Integer Generator =\n");
		printf("\n1.\tThree integers");
		printf("\n2.\tSix integers");
		printf("\n3.\tNine integers");
		printf("\n4.\tExit");
		printf("\nInput: ");
		scanf("%d", &intResponse);

		if (intResponse == 1) {
			int1 = rand() % 999999;
			int2 = rand() % 999999;
			int3 = rand() % 999999;
			printf("\n\t= Here are your random numbers =\n");
			printf("\n\t%d", int1);
			printf("\n\t%d", int2);
			printf("\n\t%d\n", int3);
		}

		if (intResponse == 2) {
			int1 = rand() % 999999;
			int2 = rand() % 999999;
			int3 = rand() % 999999;
			int4 = rand() % 999999;
			int5 = rand() % 999999;
			int6 = rand() % 999999;
			printf("\n\t= Here are your random numbers =\n");
			printf("\n\t%d\t%d", int1, int2);
			printf("\n\t%d\t%d", int3, int4);
			printf("\n\t%d\t%d\n", int5, int6);
		}

		if (intResponse == 3) {
			int1 = rand() % 999999;
			int2 = rand() % 999999;
			int3 = rand() % 999999;
			int4 = rand() % 999999;
			int5 = rand() % 999999;
			int6 = rand() % 999999;
			int7 = rand() % 999999;
			int8 = rand() % 999999;
			int9 = rand() % 999999;
			printf("\n\t= Here are your random numbers =\n");
			printf("\n\t%d\t%d\t%d", int1, int2, int3);
			printf("\n\t%d\t%d\t%d", int4, int5, int6);
			printf("\n\t%d\t%d\t%d\n", int7, int8, int9);
		}

	}
}
