/*
  Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORD_LEN 10

int main() {
    int c, state, len_counter;
    int word_len[MAX_WORD_LEN + 1];

    state = OUT;
    len_counter = 0;

    for (int i = 0; i <= MAX_WORD_LEN; ++i) {
        word_len[i] = 0;
    }
           
    while ((c = getchar()) != EOF) {
	    if (c != ' ' && c != '\n' && c != '\t') {
	        state = IN;
            ++len_counter;
	    }
	    else if (state == IN) {
            if (len_counter <= MAX_WORD_LEN) {
                ++word_len[len_counter];
            } else {
                ++word_len[MAX_WORD_LEN];
            }
            len_counter = 0;
            state = OUT;
        }
    }

    printf("\nVerical Histogram\n");
    int max_height = 0;
    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        if (word_len[i] > max_height) {
            max_height = word_len[i];
        }
    }

    for (int row = max_height; row > 0; --row) {
        for (int col = 1; col <= MAX_WORD_LEN; ++col) {
            if (word_len[col] >= row) {
                printf("[   ] ");
            } else {
                printf("      ");
            }
        }
        putchar('\n');
    }

    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        if (i < MAX_WORD_LEN) {
            printf("|%2d | ", i);
        } else {
            printf("|10+| ");
        }
    }
    putchar('\n');
    
    return 0;
}
