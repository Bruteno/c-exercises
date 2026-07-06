/*
  Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main() {
    int c, b, t, nl;
    b = 0;
    t = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
	if (c == ' ') ++b;
	if (c == '\t') ++t;
	if (c == '\n') ++nl;
    }
    
    printf("Blanks:    %d\n", b);
    printf("Tabs:      %d\n", t);
    printf("New lines: %d\n", nl);

    return 0;
}
