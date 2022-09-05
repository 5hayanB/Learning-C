#include <stdio.h>

int main(void)
{
    int max, min, num1, num2, num3, num4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    max = min = num1;

    if (num2 > max)
    {
        max = num2;
        min = min > num2 ? num2:;
    }
    else if (num3 > max)
    {
        max = num3;
        min = min > num3 ? num3:;
    }
    else if (num4 > max)
    {
        max = num4;
    }
}
