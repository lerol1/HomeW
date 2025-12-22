#include <stdio.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main(void) {
    char c;
    int count = 0;

    while (scanf("%c", &c) == 1) {
        if (c == '.') break;
        if (is_digit(c))
            count++;
    }

    printf("%d", count);
    return 0;
}
