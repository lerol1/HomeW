#include <stdio.h>

int convert(int n, int p) {
    if (n == 0) return 0;

    int result = 0;
    int place = 1;

    while (n > 0) {
        result += (n % p) * place;
        place *= 10;
        n /= p;
    }

    return result;
}

int main(void) {
    int n, p;
    scanf("%d %d", &n, &p);

    printf("%d", convert(n, p));
    return 0;
}
