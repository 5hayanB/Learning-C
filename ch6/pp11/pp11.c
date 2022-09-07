#include <stdio.h>

int main(void) {
    float n;
    float fact = 1.0f,
          e = 1.0f;

    printf("Enter approximation value: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; ++i) {
        fact *= i;

        e += 1.0f / fact;
    }

    printf("e (up to %.0f) = %f\n", n, e);

    return 0;
}
