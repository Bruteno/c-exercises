#include <stdio.h>

int main() {
    float loan = 0.0f;
    float interest = 0.0f;
    float monthly = 0.0f;
    float balance = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);
    interest = interest / 100.0f / 12.0f;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    
    balance = (loan - monthly) + loan * interest;
    printf("\nBalance remaining after first payment: $%.2f\n", balance);

    balance = (balance - monthly) + balance * interest;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance - monthly) + balance * interest;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
