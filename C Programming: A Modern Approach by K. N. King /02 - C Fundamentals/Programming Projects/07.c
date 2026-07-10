#include <stdio.h>

int main() {
    int dollars; 
   
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    
    int total_20s = dollars / 20;
    printf("\n$20 bills: %d\n", total_20s);
    dollars = dollars - (total_20s * 20);

    int total_10s = dollars / 10;
    printf("$10 bills: %d\n", total_10s);
    dollars = dollars - (total_10s * 10);

    int total_5s = dollars / 5;
    printf(" $5 bills: %d\n", total_5s);
    dollars = dollars - (total_5s * 5);    
    
    int total_1s = dollars;
    printf(" $1 bills: %d\n", total_1s);

    return 0;
}
