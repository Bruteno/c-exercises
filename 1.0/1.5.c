#include <stdio.h>

int main() {
    float celsius, fahr;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    celsius = upper;
    
    printf("┌─────────┬────────────┐\n");
    printf("│ Celsius │ Fahrenheit │\n");
    printf("├─────────┼────────────┤\n");
    
    while (celsius >= lower) {
	fahr = (9.0 / 5.0) * celsius + 32.0;
	printf("│ %7.0f │ %10.0f │\n", celsius, fahr);
	celsius = celsius - step;
    }

    printf("└─────────┴────────────┘\n");
}
