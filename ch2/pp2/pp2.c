#include <stdio.h>

#define PI 3.14159
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
    float r = 10.0f;
    float v = SCALE_FACTOR * PI * (r * r * r);

    printf("Radius (in meters)       = %.1f\nVolume (in cubic meters) = %.1f\n", r, v);

    return 0;
}
