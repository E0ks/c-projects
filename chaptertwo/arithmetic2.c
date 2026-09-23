/* Program that queries user for values to an algebraic problem */

#include <stdio.h>

int main()
{
    int intValue1, intValue2, intValue3, intValue4;
    int intResult;

    printf("\n\tThis program will ask you to input the variables for the problem (a - b)(x - y)\n");

    printf("\nPlease enter the value for variable a: ");
    scanf("%d", &intValue1);

    printf("\nPlease enter the value for variable b: ");
    scanf("%d", &intValue2);

    printf("\nPlease enter the value for variable x: ");
    scanf("%d", &intValue3);

    printf("\nPlease enter the value for variable y: ");
    scanf("%d", &intValue4);

    intResult = (intValue1 - intValue2) * (intValue3 - intValue4);

    printf("\nThe result of (a - b)(x - y) is %d\n", intResult);

    return 0;
}


