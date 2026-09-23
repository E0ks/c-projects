/* Program that calculates commision for a shop */

#include <stdio.h>

int main()
{
    float fltRate, fltCommission;
    int intSalesPrice, intCost;

    printf("\n\tCommission calculator program");

    printf("\nWhat is the rate for commissions?: ");
    scanf("%f", &fltRate);

    printf("\nWhat is the sales price?: ");
    scanf("%d", &intSalesPrice);

    printf("\nWhat is the cost?: ");
    scanf("%d", &intCost);

    fltCommission = fltRate * (intSalesPrice - intCost);

    printf("\nEstimated commissions for the store are %.2f\n", fltCommission);

    return 0;
}
