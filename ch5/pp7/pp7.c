#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4,
        min1, min2, max1, max2,
        min,  max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 >= num2)
    {
        max1 = num1;
        min1 = num2;
    }
    else
    {
        max1 = num2;
        min1 = num1;
    }
    if (num3 >= num4)
    {
        max2 = num3;
        min2 = num4;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }
    if (max2 > max1)
    {
        max = max2;
    }
    else
    {
        max = max1;
    }
    if (min2 < min1)
    {
        min = min2;
    }
    else
    {
        min = min1;
    }
    printf("Largest: %d\nSmallest: %d\n", max, min);

    return 0;
}
