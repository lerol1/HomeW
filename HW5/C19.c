#include <stdio.h>

int digit_to_num(char c) {
    return c - '0';
}

int main(void) {
    char c;
    int sum = 0;

    while (scanf("%c", &c) == 1) {
        if (c == '.') break;
        if (c >= '0' && c <= '9')
            sum += digit_to_num(c);
    }

    printf("%d", sum);
    return 0;
}
