#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", nod(a, b));
    return 0;
}
