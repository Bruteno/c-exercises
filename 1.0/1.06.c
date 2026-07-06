/*
  Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main() {
    int result;

    printf("Enter a character or send EOF signal:\n");

    result = (getchar() != EOF);

    printf("Result: %d\n", result);

    return 0;
}
