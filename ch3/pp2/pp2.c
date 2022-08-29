#include <stdio.h>

int main(void)
{
    int itemNo, mm, dd, yyyy;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNo);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-d/%-d/%-d\n", itemNo, unitPrice, mm, dd, yyyy);

    return 0;
}
