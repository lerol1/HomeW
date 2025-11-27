#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 1;
    int b = 1;

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 3; i <= n; ++i) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
