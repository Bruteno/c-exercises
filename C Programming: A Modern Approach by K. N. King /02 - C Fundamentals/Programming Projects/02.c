#include <stdio.h>

int main() {
    int r = 10;
    float pi = 3.14159f;
    float v = 4.0f / 3.0f * pi * (r * r * r);

    printf("%f\n", v);

    return 0;
}

/* If 4/3 is used instead of 4.0f / 3.0f, 
 * then the division will be rounded down from 1.333... to 1,
 * making the calculation 1 * pi * r^3.
 */
