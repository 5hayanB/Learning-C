#include <stdio.h>

#define PI 3.14159
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
    float r, v;

    printf("Radius (in meters)       = ");
    scanf("%f", &r);

    v = SCALE_FACTOR * PI * (r * r * r);

    printf("Volume (in cubic meters) = %.1f\n", v);
}
