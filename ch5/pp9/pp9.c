#include <stdio.h>

int main(void)
{
    int yy, yy1, yy2, mm1, mm2, dd1, dd2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    yy = yy2 - yy1;
    if (yy == 0)
    {
        int mm = mm2 - mm1;
        if (mm == 0)
        {
            int dd = dd2 - dd1;
            printf(
                "%d/%d/%.2d is earlier than %d/%d/%.2d\n",
                (dd < 0) ? mm2: mm1, (dd < 0) ? dd2: dd1, (dd < 0) ? yy2: yy1,
                (dd < 0) ? mm1: mm2, (dd < 0) ? dd1: dd2, (dd < 0) ? yy1: yy2
            );
        }
        else
        {
            printf(
                "%d/%d/%.2d is earlier than %d/%d/%.2d\n",
                (mm < 0) ? mm2: mm1, (mm < 0) ? dd2: dd1, (mm < 0) ? yy2: yy1,
                (mm < 0) ? mm1: mm2, (mm < 0) ? dd1: dd2, (mm < 0) ? yy1: yy2
            );
        }
    }
    else
    {
        printf(
            "%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            (yy < 0) ? mm2: mm1, (yy < 0) ? dd2: dd1, (yy < 0) ? yy2: yy1,
            (yy < 0) ? mm1: mm2, (yy < 0) ? dd1: dd2, (yy < 0) ? yy1: yy2
        );
    }

    return 0;
}
