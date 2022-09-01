#include <stdio.h>

#define OCTAL 8

int main(void)
{
    int n, dig4, dig3, dig2, dig1, dig0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &n);

    dig0 = n % OCTAL;
    n /= OCTAL;
    dig1 = n % OCTAL;
    n /= OCTAL;
    dig2 = n % OCTAL;
    n /= OCTAL;
    dig3 = n % OCTAL;
    n /= OCTAL;
    dig4 = n % OCTAL;

    printf(
        "In octal, your number is: %d%d%d%d%d\n",
        dig4, dig3, dig2, dig1, dig0
    );
}
