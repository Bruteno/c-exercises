#include <stdio.h>

int main() {
    int itemNum, month, day, year;
    float unitPrice = 0.2f;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    if (unitPrice > 9999.99) {
        unitPrice = 9999.99;
    }

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-2d/%-2d/%-4d\n", itemNum, unitPrice, month, day, year);

    return 0;
}
