#include <stdio.h>

int main() {
    float dollars;
    float tax = 0.05f;
    
    printf("Enter an amount: ");
    scanf("%f", &dollars);
    printf("With tax added: $%.2f\n", dollars + (dollars * tax));
    
    return 0;
}
