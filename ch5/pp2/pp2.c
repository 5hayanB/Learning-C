#include <stdio.h>

#define HR12 12

int main(void)
{
    int hr, min, newHr;

    printf("Enter a 24-hour time: ");
    scanf("%d:%2d", &hr, &min);

    printf("Equivalent 12-hour time: ");
    if (hr <= 12)
    {
        printf("%d:%d AM\n", hr, min);
    }
    else
    {
        newHr = hr - HR12;
        printf("%d:%d PM\n", newHr, min);
    }

    return 0;
}
