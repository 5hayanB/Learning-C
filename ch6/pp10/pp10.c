#include <stdio.h>

int main(void)
{
    int yy1, mm1, dd1;
    int yy = 99,
        mm = 99,
        dd = 99;

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm1, &dd1, &yy1);

        if ((yy1 == 0) && (mm1 == 0) && (dd1 == 0)) {
            break;
        }

        if (yy1 == yy) {
            if (mm1 == mm) {
                if (dd1 < dd) {
                    yy = yy1;
                    mm = mm1;
                    dd = dd1;
                }
            } else if (mm1 < mm) {
                yy = yy1;
                mm = mm1;
                dd = dd1;
            }
        } else if (yy1 < yy) {
            yy = yy1;
            mm = mm1;
            dd = dd1;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", mm, dd, yy);

    return 0;
}
