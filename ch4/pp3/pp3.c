#include <stdio.h>

int main(void)
{
    int dig2, dig1, dig0;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &dig2, &dig1, &dig0);

    printf("The reversal is: %d%d%d\n", dig0, dig1, dig2);

    return 0;
}
