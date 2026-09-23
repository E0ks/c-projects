/* Program that calculates the revenue for a shop */

#include <stdio.h>

int main()
{
    int intPrice, intQuantity, intRevenue;

    printf("\n\tWelcome to the shop revenue calculator\n");

    printf("\nWhat is the price of the goods sold?: ");
    scanf("%d", &intPrice);

    printf("\nWhat is the quantity of the goods sold?: ");
    scanf("%d", &intQuantity);

    intRevenue = intPrice * intQuantity;

    printf("\nThe estimated revenue for the store is %d\n", intRevenue);
     
    return 0;
}



