#include <stdio.h>

int main(void)
{
    int n, dig1, dig0;

    printf("Enter a two-digit number: ");
    scanf("%2d", &n);

    dig0 = n % 10;
    dig1 = n / 10;

    printf("The reversal is: %d%d\n", dig0, dig1);

    return 0;
}
