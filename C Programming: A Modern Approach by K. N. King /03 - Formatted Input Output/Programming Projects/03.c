#include <stdio.h>

int main() {
    int prefix, identifier, code, number, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);

    if (prefix != 978 && prefix != 979) {
        printf("Error: Invalid GS1 prefix!\n");
        return 1;
    } else {
        printf("GS1 prefix: %d\n", prefix);
        printf("Group identifier: %d\n", identifier);
        printf("Publisher code: %d\n", code);
        printf("Item number: %d\n", number);
        printf("Check digit: %d\n", digit);
    }

    return 0;
}
