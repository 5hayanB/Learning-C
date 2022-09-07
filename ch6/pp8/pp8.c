#include <stdio.h>

int main(void) {
    int days, day;
    int count = 7;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    for (int i = 0; i < day - 1; ++i) {
        printf("   ");
        --count;
    }

    for (int i = 1; i <= days; ++i) {
        printf(" %2d", i);
        --count;

        if ((count == 0) || (i == days)) {
            printf("\n");
            count = 7;
        }
    }
}
