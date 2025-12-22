#include <stdio.h>

int main(void) {
    char c;
    int balance = 0;

    while (scanf("%c", &c) == 1) {
        if (c == '.') break;

        if (c == '(')
            balance++;
        else if (c == ')') {
            balance--;
            if (balance < 0) {
                printf("NO");
                return 0;
            }
        }
    }

    if (balance == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
