#include <stdio.h>

int main(void)
{
    int gsi, group, pub, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &pub, &item, &check);

    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
        gsi, group, pub, item, check);

    return 0;
}
