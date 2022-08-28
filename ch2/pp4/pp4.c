#include <stdio.h>

#define TAX_PERCENT (5.0f / 100.0f)

int main(void)
{
    float amount, tax, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax   = amount * TAX_PERCENT;
    total = amount + tax;

    printf("With tax added: $%.2f\n", total);

    return 0;
}
