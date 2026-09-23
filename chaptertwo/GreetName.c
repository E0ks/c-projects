/* Program that prompts for your name and creates a greeting */

#include <stdio.h>

int main()
{
    char strName[55];

    printf("\nWhat is your name?: %s", strName);

    scanf("%55s", strName);

    printf("\nHello %s, have a nice day!\n", strName);

    return 0;
}

