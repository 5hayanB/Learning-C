#include <stdio.h>

int main(void)
{
    int x5, x4, x3, x2, x, sol;

    printf("x = ");
    scanf("%d", &x);

    x5  = x * x * x * x * x;
    x4  = x * x * x * x;
    x3  = x * x * x;
    x2  = x * x;
    sol = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", sol);

    return 0;
}
