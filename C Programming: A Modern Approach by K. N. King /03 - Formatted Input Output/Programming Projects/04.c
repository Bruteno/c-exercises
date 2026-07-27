#include <stdio.h>

int main() {
    int area, exchange, line;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &exchange, &line);

    printf("You entered %03d.%03d.%04d\n", area, exchange, line);
    return 0;
}

