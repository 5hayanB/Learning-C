#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%4d", &num);

    printf("The number %d has ", num);
    if (num >= 0 && num <= 9)
    {
        printf("1 digit\n");
    }
    else if (num <= 99)
    {
        printf("2 digits\n");
    }
    else if (num <= 999)
    {
        printf("3 digits\n");
    }
    else if (num <= 9999)
    {
        printf("4 digits\n");
    }
    else
    {
        printf("Number should be no more than 4 digits\n");
    }

    return 0;
}
