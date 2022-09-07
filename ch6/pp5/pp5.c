#include <stdio.h>

int main(void)
{
    int n, digits, rev;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        digits = n % 10;
        n /= 10;
        printf("%d", digits);
    } while (n != 0);

    printf("\n");

    return 0;
}
