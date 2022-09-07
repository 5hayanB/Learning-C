#include <stdio.h>

int main(void)
{
    float max = 0.0f, num;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max)
            max = num;
    }
    while (num > 0);

    printf("The largest number entered was %f\n", max);

    return 0;
}
