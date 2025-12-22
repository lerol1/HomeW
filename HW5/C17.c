#include <stdio.h>

int is_happy_number(int n) {
    int sum = 0;
    int prod = 1;

    while (n > 0) {
        int d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }

    return sum == prod;
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (is_happy_number(n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
