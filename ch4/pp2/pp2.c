#include <stdio.h>

int main(void)
{
    int n, dig2, dig1, dig0;

    printf("Enter a three-digit number: ");
    scanf("%3d", &n);

    dig2 = n / 100;
    n %= 100;
    dig1 = n / 10;
    dig0 = n % 10;

    printf("The reversal is: %d%d%d\n", dig0, dig1, dig2);

    return 0;
}
