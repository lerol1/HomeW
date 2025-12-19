#include <stdio.h>

unsigned long long grains(int n) {
    unsigned long long g = 1;
    for (int i = 1; i < n; i++) {
        g *= 2;
    }
    return g;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%llu", grains(n));
    return 0;
}
