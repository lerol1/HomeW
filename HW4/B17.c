#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 10; i <= n; i++) {
        int x = i;
        int sum = 0;
        int prod = 1;

        while (x > 0) {
            int d = x % 10;   
            sum += d;
            prod *= d;
            x /= 10;
        }

        if (sum == prod) {
            printf("%d ", i);
        }
    }

    return 0;
}
