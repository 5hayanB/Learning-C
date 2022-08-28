#include <stdio.h>

#define BILL_20 20
#define BILL_10 10
#define BILL_5  5
#define BILL_1  1

int main(void)
{
    int amount, bill20, bill10, bill5, bill1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bill20 = amount / BILL_20;
    amount = amount - (bill20 * BILL_20);

    bill10 = amount / BILL_10;
    amount = amount - (bill10 * BILL_10);

    bill5 = amount / BILL_5;
    amount = amount - (bill5 * BILL_5);

    bill1 = amount / BILL_1;
    amount = amount - (bill1 * BILL_1);

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf(" $5 bills: %d\n", bill5);
    printf(" $1 bills: %d\n", bill1);

    return 0;
}

