#include <stdio.h>

int main(void)
{
    int x, sol;

    printf("x = ");
    scanf("%d", &x);

    sol = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;

    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %d\n", sol);

    return 0;
}
