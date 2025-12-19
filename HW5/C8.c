#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main(void) {
    char c;

    while (scanf("%c", &c) == 1) {
        if (c == '.') break;
        printf("%c", to_upper(c));
    }

    return 0;
}
