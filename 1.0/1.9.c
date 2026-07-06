#include <stdio.h>

int main() {
    int c;
    int lc = EOF;

    while ((c = getchar()) != EOF) {
        if (!(c == ' ' && lc == ' ')) {
            putchar(c);
        }
	
        lc = c;
    }
}
