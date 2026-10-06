#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char chrResponse = '\0';
    int intRandomNum = 0;
    srand(time(NULL));
    intRandomNum = (rand() % 10) + 1;

    printf("\nPlease enter a number between 1 - 10: ");
    scanf("%c", &chrResponse);

    if isdigit(chrResponse)
    {
        if (chrResponse == intRandomNum)
	{
	   printf("\nYou guessed correctly!\n");
	}
    
    
        else    
        {
            printf("\nYou guessed incorrectly!");
	    printf("\nThe correct answer is %d\n", intRandomNum);
        }
    }

    else
    {
        printf("\nThat is not a number!\n");
    }

    return 0;

}

