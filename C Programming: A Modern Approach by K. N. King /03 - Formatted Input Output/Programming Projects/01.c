#include <stdio.h>

int main() {
    int month, day, year;
    
    //mm/dd/yyyy
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);
    
    //yyyymmdd
    printf("You entered the date %4d%02d%02d\n", year, month, day);

    return 0; 
}
