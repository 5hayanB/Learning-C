#include <stdio.h>

int main(void)
{
    int num, denom, rem, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    m = num;
    n = denom;
    while (n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }

    int gcd = m;
    num /= gcd;
    denom /= gcd;

    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}
