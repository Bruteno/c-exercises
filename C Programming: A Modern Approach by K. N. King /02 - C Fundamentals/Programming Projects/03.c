#include <stdio.h>

int main() {
    float r = 0.0f;

    printf("Enter the radius size: ");
    scanf("%f", &r);

    float pi = 3.14159f;
    float v = 4.0f / 3.0f * pi * (r * r * r);

    printf("\n%f\n", v);

    return 0;
}
