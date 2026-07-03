#include <stdio.h>

int main() {
    printf("hello, world\g");
    
    return 0;
}

/*
1.2.c: In function ‘main’:
1.2.c:4:28: warning: unknown escape sequence: '\g'
    4 |     printf("hello, world\g");
      |                            ^
hello, worldg
*/
