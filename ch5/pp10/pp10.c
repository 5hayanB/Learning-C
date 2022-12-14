#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter numerical grade: ");
    scanf("%d", &num);

    num = num / 10;

    printf("Letter grade: ");
    switch (num)
    {
        case 10: case 9:
                 printf("A\n");
                 break;
        case 8:  printf("B\n");
                 break;
        case 7:  printf("C\n");
                 break;
        case 6:  printf("D\n");
                 break;
        case 5: case 4: case 3: case 2: case 1: case 0:
                 printf("F\n");
                 break;
        default: printf("Grade is out of range.\n");
                 break;
    }

    return 0;
}
