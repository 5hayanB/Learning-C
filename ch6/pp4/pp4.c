#include <stdio.h>

int main(void)
{
    float comm, value;

    while (1) {
        printf("Enter value of trade: ");
        scanf("%f", &value);

        if (value == 0) {
            break;
        } else {
            if (value < 2500.00f) {
                comm = 30.00f + .017f * value;
            } else if(value < 6250.00f) {
                comm = 56.00f + .0066f * value;
            } else if (value < 20000.00f) {
                comm = 76.00f + .0034f * value;
            } else if (value < 50000) {
                comm = 100.00f + .0022f * value;
            } else if (value < 500000.00f) {
                comm = 155.00f + .0011f * value;
            }
            else {
                comm = 255.00f + .0009f * value;
            }
            
            if (comm < 39.00f) {
                comm = 39.00f;
            }
            
            printf("Commision: $%.2f\n", comm);
        }
    }

    return 0;
}
