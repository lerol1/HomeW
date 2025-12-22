#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%llu", factorial(n));
    return 0;
}
