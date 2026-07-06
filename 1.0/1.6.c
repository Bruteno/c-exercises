#include <stdio.h>

int main(void) {
    int result;

    printf("Enter a character or send EOF signal:\n");

    result = (getchar() != EOF);

    printf("Result: %d\n", result);
}
